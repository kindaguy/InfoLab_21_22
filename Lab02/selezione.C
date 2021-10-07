#include <iostream>

using namespace std;


int main(){

    int a,b;

    //Stampo a video un messaggio;  'endl' indica un a-capo
    cout << endl <<  "Inserire valore intero: " << endl;

    //Istruzione di lettura da tastiera
    cin >> a;

    //Stampo il valore letto

    cout << endl <<  "Valore inserito: " << a << endl;

    /*
    if(condizione logica){
        se vero
    }
    else{
        se falso
    }
    */

    if( a>=0 ){ //Blocco 1
        b = 2*a;
    }
    else{ //Blocco 2
        b=3*a;
    }
        

    cout << endl << "Risultato, b= " << b << endl;
    return 0;
}