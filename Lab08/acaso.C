#include <iostream>
#include <fstream>

#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

   float a;

   srand(time(NULL));

   a = (float)rand()/RAND_MAX;

   cout << endl << RAND_MAX << endl;


   cout << endl << a <<endl;

   return 0;
}