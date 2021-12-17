#include <iostream>
#include <fstream>
#include <string>

//Librerie personali
#include "../TamaLib/libstatTama.h"
#include "myArrayMisura.h"

//Lascio queste due librerie in due posti diversi
//per ricordarvi come funziona l'include.
//Per l'esame non state a diventare matti e
//mettete pure tutto nella stessa cartella.

using namespace std;


//Attenzione ai parametri del main
int main(int argc, char ** argv){
   
   string appo;

   ifstream filein;

   myArrayMisura v;

   float * vtempi;
   float * vpos;

   float stimaq, stimam;

   float * vdiscr;


   if(argc<2){
      cout << endl << "Inserire nome file dati:  ";
      cin >> appo;
   }
   else{
      appo = argv[1];
   }

   //Carico vettore
   //appo.c_str() serve perche' la NOSTRA
   //funzione inizializza vuole un char []
   // come parametro, e non una string....
   //.c_str() restituisce proprio un char []
   
   inizializza(&v,appo.c_str());

   //Debug
   //for(int i=0; i<v.used; i++)
   //   cout << endl << v.raw[i].t << " " << v.raw[i].x << endl;

   //A questo punto elaboro.
   //Il problema e` che la funzione linReg2 vuole un vettore
   //di ascisse e un vettore di ordinate. Poco male...
   //...li creiamo!

   vtempi = new float[v.used];
   vpos = new float[v.used];
   
   for(int i=0; i<v.used; i++){
      vtempi[i] = v.raw[i].t;
      vpos[i] = v.raw[i].x;
   }

   
   linReg2(vtempi,vpos,v.used,&stimaq, &stimam);

   cout << endl << "Coefficienti di regressione y = m*x+q calcolati!!!"<< endl;
   cout << "stima m: " << stimam << endl;
   cout << "stima q: " << stimaq << endl;

   //A questo punto passiamo all'analisi degli errori....
   vdiscr = new float[v.used];

   //Determiniamo il vettore degli scarti.
   for(int i=0; i<v.used; i++)
      vdiscr[i] = vpos[i] - (stimam*vtempi[i] + stimaq);
   
   cout << "Media scarti: " << media(vdiscr,v.used) << endl;
   cout << "StdDev scarti: " << devstd(vdiscr,v.used) << endl;

   //E poi possiamo passare a cose più raffinate....
   
   return 0;
}