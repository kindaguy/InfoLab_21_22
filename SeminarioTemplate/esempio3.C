#include <iostream>

#include "libTemp.hpp"

#include "myArrayMisura.h"

int main(){

   myArrayMisura dati;

   misura medie;

   //Carichiamo i dati da file
   inizializza(&dati,"dati.dat");

   //??? media(dati,dati.used)???
   
   medie = media<misura,misura>(dati.raw,dati.used);
   cout << medie.t << " " << medie.x << endl;
   
   return 0;


}

