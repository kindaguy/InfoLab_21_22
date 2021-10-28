#include <iostream>
#include <fstream>

using namespace std;

int main(){

   //char c  = 'a';
   
   char str[] = "Ciao";

   char str1[100] = "Ciao mondo";

   ifstream flusso_in;

   ofstream flusso_out;


   int a;
   float b;
   char c;
   char spazio = ' ';

   cin >> a >> b >> c;
   cout << endl << endl;
   cout << a << endl << b << endl << c << endl;


   flusso_in.open("dati.dat");

   if(flusso_in.fail()){

      cout << endl << "Problema apertura file" << endl;
      return -1;
   }

   flusso_in >> a >> b >> c;   

   flusso_in.close();


   flusso_out.open("risultati.dat");


   if(flusso_in.eof()){
      cout << endl << "File finito" << endl;
   }
   
   return 0;
}