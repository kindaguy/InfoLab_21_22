#include <iostream>

using namespace std;


int main(){

    int a;
    int conta  = 0; //Inizializzo valore (better safe than sorry!)
    int somma = 0; //Inizializzo valore


    //Stampo a video un messaggio;  'endl' indica un a-capo
    cout << endl <<  "Inserire sequenza di valori positivi da mediare terminata da 0: " << endl;

    //Istruzione di lettura da tastiera
    cin >> a;

    //Il caricamento termina appena viene inserito lo 0
    while(a >!= 0 ){
        conta = conta + 1;
        somma =  somma + a;
        cin >> a;
    }


    //Quando esco devo fare qualche cosa....
    //Completate


    
    return 0;
}
