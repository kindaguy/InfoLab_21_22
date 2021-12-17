#include <cstring>
#include <string>
#include <iostream>
#include <fstream>


using namespace std;

#define INCR 10

//Definizione tipi di dato

struct misura{
   float t,x;
};

struct myArrayMisura{
   int size;
   int used;
   misura * raw;
};

//Dichiarazione funzioni

//Interfaccia

void inizializza(myArrayMisura *);
void inizializza(myArrayMisura *, int dim);
void inizializza(myArrayMisura *, const char nomefile[]);

void inserisci(myArrayMisura *, misura);



//Private (utili per gestione interna)

void ridimensiona(myArrayMisura *, int newdim);
