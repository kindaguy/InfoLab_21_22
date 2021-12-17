#include "libRandomTama.h"

int acasoInt(int min, int max){

   return rand()%(max-min)+min;
}

double acasoDouble(double min,double max){

   return ((double) rand() / RAND_MAX) * (max-min) +min; 
}

double acasoGauss(double m,double s){

   double u1,u2;
   u1 = acasoDouble(0,1);
   u2 = acasoDouble(0,1);
   return s*(sqrt(-2*log(u1))*cos(2*PIGRECO*u2))+m;  
}