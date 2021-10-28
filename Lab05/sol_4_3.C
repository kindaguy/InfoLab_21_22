#include <iostream>

using namespace std;

int eliminaSwap(float [], int dim, int pos);
int eliminaShift(float [], int dim, int pos);

int main(){

   float v[20];
   int quanti = 0;  
   int conta_neg = 0;

   cout << "Quanti dati (float) vuoi inserire (max 20)?";
   cin >> quanti;
   cout << endl << "Ok. Ora inserisci "<< quanti << " valori:" << endl;

   for(int i=0; i< quanti; i++)
      cin >> v[i];
   
   cout << endl << "Dati inseriti:";
   for(int i=0; i< quanti; i++)
      cout << v[i] << " ";
   
   cout << endl;

   cout << endl << "Adesso facciamo la pulizia:";

   for(int i=0; i<quanti; i++){
      //Ispeziono un elemento
      if(v[i]<0){
         conta_neg++;
         quanti = eliminaShift(v,quanti,i);

         //E qui stiamo attenti: l'elemento che si trova in posizione i
         //adesso non e` stato ispezionato.
         
         i--; //Questo annulla l'effetto dell'i++ successivo
         //Quindi mi consente di controllare il nuovo valore in 
         //posizione i   
      }

   }

   //Al termine di questo ciclo il vettore e` pulito

   cout << endl << "Elementi sopravvissuti:" << quanti;
   cout << endl << "Elementi eliminati: " << conta_neg;

   cout << endl << "Dati puliti:";
   for(int i=0; i< quanti; i++)
      cout << v[i] << " ";
   
   cout << endl<< endl;

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