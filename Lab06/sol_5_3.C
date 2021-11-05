#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

float media(float [], int);
float devstd(float [], int);
float minimo(float [], int);
float massimo(float [], int);
int clean_out(float[], int);
int eliminaSwap(float [], int dim, int pos);
int eliminaShift(float [], int dim, int pos);

int main(){

   ifstream flusso_in;
   int quanti = 0;

   float appo;
   float dati[100];

   float m, devst, small, large;
   int quanti1,noutliers;

   flusso_in.open("misure.dat");
   
   if(flusso_in.fail()){
      cout << endl << "Problema apertura file! Esco! \n";
      return -1;
   }

   cout << endl << "File aperto. Carico....";

   flusso_in >> appo;

   
   while(!flusso_in.eof()){
      dati[quanti] = appo;
      quanti++;
      flusso_in >> appo;

   }
   flusso_in.close();
   cout << endl << "...dati caricati!\n";

   m = media(dati,quanti);
   devst = devstd(dati,quanti);
   small = minimo(dati, quanti);
   large = massimo(dati, quanti);
   quanti1 = clean_out(dati,quanti);

   //Determino il numero degli outliers
   noutliers = quanti-quanti1;
   //Aggiorno la dimensione effettiva del vettore ripulito
   quanti = quanti1;

   //Stampe
   cout << endl << "Media: " << m;
   cout << endl << "Deviazione standard: " << devst;
   cout << endl << "Minimo: " << small;
   cout << endl << "Massimo: " << large;
   cout << endl << "Numero outliers: " << noutliers;

   cout << endl << "Prime tre componenti vettore ripulito:\n";
   for(int i=0; i<3 and i<quanti; i++){
      cout<<setw(10)<<dati[i];
      //setw(n): determina la dimensione del campo in cui
      //viene scritto il numero. Comodo per stampe allineate.
   }
   cout << endl;

   cout << endl << "Ultime tre componenti vettore ripulito:\n";
   for(int i=quanti-1; i>= quanti-3 and i>=0; i--){
      cout<<setw(10)<<dati[i];
   }
   cout << endl;



   return 0;
}

int eliminaSwap(float v[], int dim, int pos){

   v[pos] = v[dim-1];
   return dim-1;
}
int eliminaShift(float v[], int dim, int pos){

   for(int i=pos; i<dim-1; i++){
        v[i] = v[i+1]; 

   }

   return dim-1;
}

float media(float v[], int dim){

   float accu = 0.f;

   for(int i=0; i< dim; i++)
      accu += v[i];
   
   return accu/dim;

}
float devstd(float v[], int dim){

   float m;
   float accu2;

   m= media(v,dim);

   for(int i=0; i<dim; i++)
      accu2 += pow(v[i] -m,2);
   
   return sqrt(accu2/(dim-1));
 
}
float minimo(float v[], int dim){
   float min = v[0];
   for(int i=1; i<dim; i++){
      if(v[i]<min) min = v[i];
   }

   return min;
}
float massimo(float v[], int dim){
   float max = v[0];
   for(int i=1; i<dim; i++){
      if(v[i]>max) max = v[i];
   }  
    return max;

}
int clean_out(float v[], int  dim){

   float m, stdv;
   m = media(v,dim);
   stdv = devstd(v,dim);

   for(int i=0; i<dim; i++){
         if(fabs(v[i]-m)>3*stdv){
            dim = eliminaSwap(v,dim,i);
            i--;
         }

   }
   //Restituisco nuova dimensione
   return dim;

}