#include <iostream>
#include "libTemp.hpp"

using namespace std;

//Declaration of the template functions

template <typename T1, typename T2>
T1 media(T2 [],int);


int main(){

   float vf[] = {1,2,3,4,5};
   int vi[] = {6,7,8,9,10};

   float m1;
   double m2;

   m1 = media<float>(vi,5);
   m2 = media<double>(vi,5);
   
   cout << endl << "Media interi: " << m1 << endl;
   cout << endl << "Media float: " << m2 << endl;

   // cout << endl << "Media interi: " << media<double,int>(vi,5) << endl;
   // cout << endl << "Media float: " << media<float,float>(vf,5) << endl;

   return 0;

}
