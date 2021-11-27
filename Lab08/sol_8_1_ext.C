#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>



using namespace std;



bool withincircle(double, double);
int countwithin(int);
double rilev(int);

double media(double [], int);
double devstd(double [], int);


int main(){

   double x,y;

   double av;
   double var;

   ofstream outfile;

   srand(time(NULL));

   //Qualificatore const rende M non modificabile
   //dalle istruzioni del programma. Ogni tentativo 
   //di modificare M verrà segnalato dal compilatore.

   const int M = 50;
   
   double *rilevazioni = new double[M];

   //Salvo i dati prodotti su un file
   outfile.open("risVarianza.dat");
   outfile << "#Andamento varianza Monte Carlo in funzione numero punti usati \n";
   outfile << "#" << setw(12) << " Npunti" << setw(12) << "Media" << setw(12) <<"Var\n";

   for (int nn = 100; nn <=1000; nn+=100){
      for(int i=0; i<50; i++){
       rilevazioni[i] = rilev(nn);
      }  
   

      av = media(rilevazioni, M);
      var = pow(devstd(rilevazioni,M),2);
      outfile << setw(12) << nn << setw(12) << av << setw(12) <<var << endl;
      
   }
   
   
   outfile.close();

   
   delete [] rilevazioni;
   

   return 0;
}



bool withincircle(double x, double y){
   if( x*x +y*y <1 )
      return true;
   else
      return false;
}

int countwithin(int n){

   int conta = 0;

   double x,y;

   

   for(int i=0; i<n; i++){
      
      x=(double) rand()/RAND_MAX;
      y=(double) rand()/RAND_MAX;
      
      if(withincircle(x,y)) conta++;
   
   }
   return conta;
}

double rilev(int n){

   return 4./n * countwithin(n);
}


double media(double v[], int dim){

   double accu = 0.f;

   for(int i=0; i< dim; i++)
      accu += v[i];
   
   return accu/dim;

}
double devstd(double v[], int dim){

   double m;
   double accu2 = 0;

   m= media(v,dim);

   for(int i=0; i<dim; i++)
      accu2 += pow(v[i] -m,2);
   
   return sqrt(accu2/(dim-1));
 
}