#include <iostream>

using namespace std;

/*
   Dichiarazione e documentazione delle funzioni:
   deve esplicitare che cosa fa la funzione e
   che significato hanno i parametri.
   A volte, a scopo di documentazione, si indica anche
   il nome del parametro, ma considerate che il 
   compilatore lo ignora....
*/ 
//Questa funzione legge valori interi da tastiera
// "mentre" il valore x inserito soddisfa la 
//condizione x<soglia, dove soglia è il parametro (intero)
//della funzione.
int leggicheck(int soglia );


//Calcola media vettore con dim elementi
float media(float [],int dim); 
//Overload: ne dichiaro una versione per vettori interi
//....
float stddev(float [], int dim);
//Overload: ne dichiaro una versione per vettori interi
//....

float min(float [], int dim);
float max(float [], int dim);

//Overload: ne dichiaro una versione per vettori interi
//....


int main(){

   //Contatori e accumulatori SEMPRE 
   //inizializzati a zero.
   int accu = 0 ;
   int accu2 = 0;
   int conta = 0;

   int max, min;
   
   int appo;
   float m;

   appo = leggicheck(0);
   while(appo != 0){
      conta++;
      //Se primo valido letto, è sia
      //max che min dei valori inseriti
      if(conta == 1){
         max = appo;
         min = appo;
      }
      else{ //Almeno un dato gia` letto
            //Se necessario, massimo e minimo
         if(appo > max)
            max = appo;
         if(appo < min)
            min = appo;
      }
      accu += appo;
      accu2 += appo*appo;
      appo = leggicheck(0);
   }
   //Finito caricamento
   if(conta == 0){
      cout << endl << "Nessun dato valido inserito. Esco." << endl;
   }
   else{
      m = (float) accu/conta;
      cout << endl << "Media: " << m << endl;
      cout << endl << "Varianza campione:" << (float) accu2/conta - m*m << endl;
      cout << endl << "Valore minimo inserito: " <<  min << endl;
      cout << endl << "Valore massimo inserito: " <<  max << endl; 
   }

   //Fine!
   return 0;
}


//Spostiamo le definizioni delle funzioni dopo il main()
//Essendo gia` state dichiarate prima del main, il main le
//puo` invocare....
int leggicheck(int soglia){

   int appo;

   do{
      cout << endl << "Inserire valore >=" << soglia << ": ";   
      cin >> appo;
   }while(appo < soglia);
   //Arrivo qui solo se il valore letto e` >=soglia
   return appo;
}

float stddev(float x[], int n){

    float accu = 0;

    float m;

    int i = 0;

    m = media(x,n);

    while(i<n){
        accu  = accu +pow(x[i] - m,2); 
        i++;
    }

    return sqrt(accu/n);
} 


//Definizione: quasi una ripetizione della dichiarazione, ma qui compaiono i nomi degli
//argomenti, qui x e n
float media(float x[], int n){

    float accu = 0.f;
    int i = 0;



    while(i < n){
        accu  = accu + x[i];
        i++; //aka i=i+1;
    }

    //Valore restituito dalla funzione.
    return accu/n;
}



float min(float x[], int dim){
   float appo;
   appo = x[0];
   for(int i=1; i<dim; i++){
      if(x[i]<appo)
         appo = x[i];
   }   
   return appo;
}

float max(float x[], int dim){
   float appo;
   //.....
   return appo;
}


//int  max(int x[], int dim){


//}
