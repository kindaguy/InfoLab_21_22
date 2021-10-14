#include <iostream>

using namespace std;

int main(){

    //Dichiarazione di un array di 5 interi
    int pippo[5];

    //Dichiarazione di un array di 7 float
    float poldo[7];

    //Dichiarazione e inizializzazione di un array di 3 double
    double pluto[] = {1.,2.,3.};
    //pluto viene creato come vettore di 3 double
    //e riempito con i valori dati.


    //Ogni elemento di un array si usa
    //come una normale variabile
    pippo[0] = 4;
    pippo[1] = 3;
    pippo[2] = 2;
    pippo[3] = pippo[2]-1;
    pippo[4] = pippo[3]-1;

    cout << endl << "Stampo contenuto di pippo: " << endl;
    for(int i=0; i<5; i++){
        cout << endl << pippo[i] << endl;
    }

    cout << endl << "Stampo contenuto di pluto: " << endl;
    for(int i=0; i<3; i++) { 
        cout << endl << pluto[i] << endl;
    }

    return 0;
}