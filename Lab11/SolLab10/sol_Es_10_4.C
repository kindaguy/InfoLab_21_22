#include <iostream>
#include <fstream>
#include <cmath>

#include "sfera.h"

using namespace std;

struct spec{
    char c;
    float ex;
    float tol;
};

void merge(sfera [],int,int,int);
void merge_sort(sfera [],int, int);

int eliminaShift(sfera v[], int dim, int pos);


int clean_out(sfera v[], int  dim);


int main(){

   ifstream filein;
   int conta = 0;
   int newconta;

   sfera *vsph;

   sfera appo;

   filein.open("sfere.dat");

   if(filein.fail()){
      cout << endl << "Problema apertura file sfere.dat. Esco!" << endl;
      return -1; 
   }

   //Prima lettura fuori dal ciclo.
   appo = leggiSfera(&filein);

   while(!filein.eof()){

      conta++;
      appo = leggiSfera(&filein);
   }

   //Sfere contate
   cout << endl << "Sul file ci sono " << conta << " sfere." << endl;

   //Reset stream
   //Riavvolgo nastro
   filein.clear();
   filein.seekg(0,ios::beg);

   vsph = new sfera[conta];

   //Carico le sfere
   for(int i=0; i<conta; i++){
      vsph[i] = leggiSfera(&filein);
   }

   //Chiudo stream
   filein.close();

   cout << endl << "Stampa prima ordinamento:" << endl;
   
   for(int i=0; i<3; i++)
      stampaSferaParziale(vsph[i]);
   
   cout << endl;

   for(int i=conta-4; i<conta; i++)
      stampaSferaParziale(vsph[i]);
   
   cout << endl;
   

   merge_sort(vsph,0,conta-1);

   cout << endl << "Stampa DOPO ordinamento:" << endl;

   for(int i=0; i<3; i++)
      stampaSferaParziale(vsph[i]);
   
   cout << endl;

   for(int i=conta-4; i<conta; i++)
      stampaSferaParziale(vsph[i]);
   
   cout << endl;


    //Esercizio 3

    spec vs[3];
    filein.open("tolleranze.dat");

    //Carico le specifiche delle sfere.
    //So quante tipologie di sfere ci sono.

    for(int i=0; i<3; i++)
        filein >> vs[i].c >> vs[i].ex >> vs[i].tol;
    
    filein.close();

    //Approccio ignorante
    for(int i=0; i< conta; i++){
        for(int j=0; j<3; j++){
            if(vsph[i].col == vs[j].c){
                vsph[i].exact = vs[j].ex;
                vsph[i].atoll = vs[j].tol;
                vsph[i].discr = vsph[i].diam - vsph[i].exact;
                //Occhio
                break;
                //break: ci fa uscire dal ciclo piu` interno
                //in effetti se abbiamo trovato corrispondenza 
                //nel colore, non serve andare avanti.
            }
            //Else NON fare nulla.
        }
    }
   
   for(int i=0; i<3; i++)
      stampaSfera(vsph[i]);
   
   cout << endl;

   for(int i=conta-4; i<conta; i++)
      stampaSfera(vsph[i]);
   
   cout << endl;
   
   //Esercizio 4
    newconta = clean_out(vsph,conta);

    cout << endl << "Elementi rimasti: " << newconta;
    cout << endl << "Elementi eliminati" <<  conta-newconta;
    cout << endl;
   
   
   delete [] vsph;
   



   cout << endl;


}



void merge_sort(sfera a[],int low,int high){
    int mid;
    if(low<high) {
        mid = low + (high-low)/2; //This avoids overflow when low, high are too large
        merge_sort(a,low,mid);
        merge_sort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

//Questa funzione di merging è specializzata al caso in cui i vettori da fondere
//sono in realta` due sottovettori di un vettore individuati da tre indici:
//Potete scrivere, per esercizio, una funzione di merge che restituisce un nuovo vettore,
//creato dinamicamente, a partire da due vettori distinti....

void merge(sfera a[],int low,int mid,int high){
//low: indice piu` piccolo dell'array da fondere
//mid: mezzo dell'array da fondere
//high: indice piu` grande dell'array da fondere

    int h,i,j,k;
    sfera *b; //Abbiamo bisogno di un vettore di appoggio dove copiare i dati
    h=low; //Indice libero per scandire vettore di sinistra
    i=0; //Indica la prima posizione libera dell'array in cui stiamo copiando i dati
    j=mid+1; //Indice libero per scandire vettore di destra

    b = new sfera[high-low+1];


    while((h<=mid)&&(j<=high)){ //Mentre non hai esaurito uno dei due sottovettori
        if(a[h].diam<=a[j].diam){
            b[i]=a[h];
            h++; //Avanza di uno con l'indice libero dell'array di sinistra
        }
        else{
            b[i]=a[j];
            j++; //Avanza di uno con l'indice libero dell'array di destra
        }
        i++; //
    }

    if(h>mid){ //Se hai esaurito il sottovettore di sinistra, riversa in b quanto rimane del sottovettore di destra
        for(k=j;k<=high;k++){
            b[i]=a[k];
            i++;
        }
    }
    else{
        for(k=h;k<=mid;k++){ //Se hai esaurito il sottovettore di destra, riversa in b quanto rimane del sottovettore di sinistra
            b[i]=a[k];
            i++;
        }
    }

    i=0; //Reset indice vettore i per la copia
    //for(k=low;k<=high;k++,i++) a[k]=b[i]; //Ricopia in a il vettore ordinato b.
    //Oppure (molto più elegantemente, ed efficientemente)
    memcpy ( (void *)  (a + low), (const void *) b, (high-low+1)*sizeof(sfera));
    //memcpy 


    delete [] b;
    b= NULL;
}



int eliminaSwap(float v[], int dim, int pos){

   v[pos] = v[dim-1];
   return dim-1;
}
int eliminaShift(sfera v[], int dim, int pos){

   for(int i=pos; i<dim-1; i++){
        v[i] = v[i+1]; 

   }

   return dim-1;
}


int clean_out(sfera v[], int  dim){


    cout << endl << "Sfere eliminate: " << endl;
   for(int i=0; i<dim; i++){
         if(fabs(v[i].discr)>v[i].atoll){
             stampaSfera(v[i]);
            dim = eliminaShift(v,dim,i);
            i--;
         }
    
   }

   cout << endl;
   //Restituisco nuova dimensione
   return dim;

}