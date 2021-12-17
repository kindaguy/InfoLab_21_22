#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <iomanip>

#include "libRandomTama.h"

#define NPUNTI 100

using namespace std;


//Una variante del solito, barboso main
int main(int argc, char ** argv){

   //argc: viene inizializzato al valore del numero di argomenti (token) passati al programma
   //argv: è un vettore di stringhe: 
   //argv[0]: nome del programma
   //argv[1]: primo "token"
   //argv[2]: secondo "token"
   //...
   //argv[argc-1]:  ultimo "token" 

   for(int i = 0; i< argc; i++)
      cout << endl << argv[i];
   cout << endl;

   float x0,v,dt;
   float poldo;
   //Carico parametri da file
   ifstream filein;
   //Salvero` i dati su file
   ofstream fileout;

   //Nuovo tipo di dato
   string appo;
   //! string è una classe C++. Una variabile string permette di registrare 
   // e manipolare stringhe 

   //Primo "token" passato da riga di comando: nome del file di parametri.
   filein.open(argv[1]);
   while(filein.fail()){
      cout << endl << "File non aperto. Inserire nome file parametri";
      cin >> appo;
      filein.open(appo);
   }
   //Se esco il file dei parametri è aperto.
   //La prima linea contiene le etichette dei parametri, quindi va ignorata
   //Legge una riga intera fino ad "acapo" (oppure un carattere diverso)
   //vedere documentazione...

   getline(filein,appo);

   //Adesso carichiamo i parametri
   filein >> x0 >> v >> dt;

   cout << endl << "Parametri acquisiti: " << endl;
   cout << "#" << setw(11)<< "x0" << setw(12) << "v" << setw(12) << "dt" << endl;
   cout << setw(12)<< x0 << setw(12) << v << setw(12) << dt << endl;

   //Chiudo stream
   filein.close();
   
   /*Generazione dati*/
   if(argc < 3){ //Se il nome del file di ouput NON e` stato dato...
      cout << endl << "Inserire nome file di output: " ;
      cin >> appo;
   }
   else{ //Altrimenti
      appo = argv[2];
   }
   //Comunque...
   fileout.open(appo);

   //Rispettiamo la specifica....
   fileout << "#" << setw(12)<< "t" << setw(12) << "x" <<  endl;
   
   fileout << setw(13)<< 0 << setw(12) << x0+acasoGauss(0,0.3);
   for(int i=1; i < NPUNTI; i++){
      poldo = x0+v*i*dt + acasoGauss(0,0.3);
      fileout << endl<< setw(13)<< i*dt << setw(12) << poldo;
      
   }
   fileout << endl;
   fileout.close();

   cout << endl << "File dati misure generato! The end!" << endl;
   return 0;
}