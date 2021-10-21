#include <iostream>

using namespace std;

int main(){

   int i[5];
   float f[5];
   double d[5];


   cout << endl << "Indirizzo primo elemento array i: " <<  &i[0] << endl;
   cout << endl <<"Chi e` i??? Lo stampo!  " <<  i << endl;
   cout << endl << "dimensione int: "<< sizeof(int) << endl;
   for(int j =1; j<5; j++)
      cout << endl << "Indirizzo elemento " << j << " array i: " <<  &i[j] << endl;


   cout << endl << "Indirizzo primo elemento array f: " <<  &f[0] << endl;
   cout << endl <<"Chi e` f??? Lo stampo! " <<  f << endl;
   cout << endl << "dimensione float: "<< sizeof(float) << endl;
   for(int j =1; j<5; j++)
      cout << endl << "Indirizzo elemento " << j << " array f: " <<  &f[j] << endl;


   cout << endl << "Indirizzo primo elemento array d: " <<  &d[0] << endl;
   cout << endl <<"Chi e` d??? Lo stampo! " <<  d << endl;
   cout << endl << "dimensione double: "<< sizeof(double) << endl;
   for(int j =1; j<5; j++)
      cout << endl << "Indirizzo elemento " << j << " array d: " <<  &d[j] << endl;

   return 0;
}