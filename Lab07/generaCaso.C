#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <iomanip>


using namespace std;

int main(){

   int nn;

   float min,max;

   ofstream fileOut;

   cout << endl << "Min?Max?";
   cin >> min >> max;

   cout << endl <<"Quanti numeri a caso?";
   
   cin >> nn;

   fileOut.open("tempi.dat");

   srand(time(NULL));

   for(int i=0; i<nn; i++)
      fileOut << setw(20) << ((double) rand()/RAND_MAX )*(max-min)+min << endl;

   fileOut.close();

   return 0;
}