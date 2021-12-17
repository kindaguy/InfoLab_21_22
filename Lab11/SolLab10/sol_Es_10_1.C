#include <iostream>
#include <fstream>

#include "sfera.h"

using namespace std;

int main(){

   ifstream filein;
   int conta = 0;

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
      
   delete [] vsph;
   
   cout << endl;


}

