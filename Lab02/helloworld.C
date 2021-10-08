//Direttive a preprocessore (no panic...)
#include <iostream> //Libreria con funzionalita` input/output tastiera/video


//Sono un commento su una riga (il compilatore mi ignora....)
/*
 Sono un commento su una o piu` righe
 (il compilatore mi ignora...)
 */

using namespace std; //Rimarra` un mistero, ma va messo....

int main(){

    int a=10;
    int b;

    cout << "Hello world!" << endl; //Sampa a video!

    cout << a << endl;

    cin >> b ;

    cout << "letto valore "<< b <<endl;
    
    cin >> a;

    cout << "letto valore "<< a <<endl;

    return 0;
}


