#include <cmath>
#include <cstdlib>
#include <ctime>

//Definiamo la costante letterale PIGRECO.
//Il valore della costante viene LETTERALMENTE sostituito 
//ad ogni occorrenza di PIGRECO nel testo nella fase 
//di pre-processore, ovvero quando vengono risolte le 
//direttive che partono con #

#define PIGRECO  3.14159


using namespace std;



int acasoInt(int min, int max);

double acasoDouble(double min,double max);

double acasoGauss(double m,double s);