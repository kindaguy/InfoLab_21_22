#include "myArrayMisura.h"

//Qui mettiamo l'implementazione...

//Interfaccia

//Inizializza a vettore vuoto
void inizializza(myArrayMisura * pm){
   pm->size = 0;
   pm->used = 0;
   pm->raw = NULL;
}

void inizializza(myArrayMisura * pm, int dim){
   pm->size = dim;
   pm->used = 0;
   pm->raw = new misura[dim];
}

void inizializza(myArrayMisura *pm, const char nomefile[]){

   ifstream filein;
   string appo;
   misura poldo;

   
   //Fase di apertura file
   filein.open(nomefile);
   while(filein.fail()){
      cout << endl << "Problema apertura file di dati. Reinserire nome: ";
      cin >> appo;
      //Pulisco lo stato, non necessario, ma per sicurezza....
      filein.clear();
      filein.open(appo);
   }


   //Qui file aperto;

   //Inizializziamo con un vettore di INCR
   inizializza(pm,INCR);

   //Prima riga del file è di intestazione
   //e va buttata
   getline(filein,appo);

   //Da qui in avanti ciclo Spoletini

   //Prima lettura fuori dal file
   filein >> poldo.t >> poldo.x;
   
   while(!filein.eof()){
      inserisci(pm, poldo);
      filein >> poldo.t >> poldo.x;
   }

   //Notate che evitiamo di leggere 2 volte il file
   //ma al costo di allargamenti del vettore (copie)
   //e qualche posizione del vettore vuota....

}


void inserisci(myArrayMisura *pm, misura m){
   //Se non c'e` spazio allargo.
   if(pm->used == pm->size)
      ridimensiona(pm,pm->size +  INCR);

   pm->raw[pm->used] = m;
   (pm->used)++;
}


//Private (utili per gestione interna)

void ridimensiona(myArrayMisura *pm, int newdim){

   misura * vappo;

   if(newdim > pm->size){
      vappo = new misura[newdim];
      memcpy((void *) vappo, (void *) pm->raw,pm->size*sizeof(misura));
      delete [] pm->raw;
      pm->raw = vappo;
   }
   
   if(newdim < pm->size){
      vappo = new misura[newdim];
      memcpy((void *) vappo, (void *) pm->raw,newdim*sizeof(misura));
      delete [] pm->raw;
      pm->raw = vappo;
   }

   pm->size = newdim;


}