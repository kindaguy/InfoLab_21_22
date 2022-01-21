#include <iostream>
#include <iomanip>

using namespace std;

//Dichiarazione funzioni
template <typename T>
void swap(T *, T *);


int main(){

   int i1 = 1,i2 = 2;
   float f1 = 3.0f,f2 = 4.0f;

   cout << endl << "Prima di swap: ";
   cout << endl <<setw(5) << i1 << setw(5) << i2;
   cout << endl <<setw(5) << f1 << setw(5) << f2;

   swap(&i1,&i2);
   swap(&f1,&f2);
   
   cout << endl << "Dopo swap: ";
   cout << endl <<setw(5) << i1 << setw(5) << i2;
   cout << endl <<setw(5) << f1 << setw(5) << f2;

   cout << endl;
   

}

//Definizione funzioni

template <typename T>
void swap(T *v, T * w){

   T appo;
   appo = *v;
   *v = *w;
   *w = appo;
}