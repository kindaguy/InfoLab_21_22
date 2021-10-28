#include <iostream>

using namespace std;

int eliminaSwap(float [], int dim, int pos);
int eliminaShift(float [], int dim, int pos);

int main(){

   float v1[5] = {1,2,3,4,5};
   float v2[5] = {1,2,3,4,5};
   int d1,d2;

   cout << endl << "Vettore iniziale:";
   for(int i = 0; i < 5;  i++)
      cout << endl << v1[i];
   
   cout << endl;

   d1 = eliminaSwap(v1,5,2);

   cout << endl << "Vettore dopo elimina swap:";
   for(int i = 0; i < 5;  i++)
      cout << endl << v1[i];
   
   cout << endl;


cout << endl << "Vettore iniziale:";
   for(int i = 0; i < 5;  i++)
      cout << endl << v2[i];
   
   cout << endl;

   d1 = eliminaShift(v2,5,2);

   cout << endl << "Vettore dopo elimina shift:";
   for(int i = 0; i < 5;  i++)
      cout << endl << v2[i];
   
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