#include "sfera.h"


sfera leggiSfera(ifstream * flussoin){
   sfera appo;

   (*flussoin) >> appo.diam >> appo.col; 
   
   appo.exact = 0;
   appo.atoll = 0;
   appo.discr = 0;

   return appo;

}
void stampaSferaParziale(sfera s){

   cout << endl << setw(10) << s.diam << setw(4) << s.col;

}
void stampaSfera(sfera s){

   cout << endl << setw(10) << s.diam << setw(4) << s.col << setw(10) 
   << s.exact<< setw(10) << s.atoll << setw(12) << s.discr;
}