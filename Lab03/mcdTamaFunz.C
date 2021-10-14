
#include <iostream> 

using namespace std; 


//Dichiarazione: dominio, codominio, nome
//!Nome univoco della funzione: nome(dominio)
//!non si possono definire due funzioni che differiscano 
//solo per il codominio!
int MCD(int, int); //Notare che compaiono solo gli insiemi f: D -> C


//Definizione: quasi una ripetizione 
//della dichiarazione,
// ma qui compaiono i nomi degli
//argomenti, qui v e w;
int MCD(int v, int w){

    int appo;
    int r;
    
    if (v>0 and w>0){
        

        if(w>v){ //Scambio a e b

            appo = v;
            v = w;
            w = appo;
        }

        while(w != 0){
            
            r = v % w;
            v=w;
            w=r;

        }

        return v;
    }
    else{

        return -1;  //Con il tacito accordo che se viene restituito un numero negativo
                    //vuol dire che e` successo qualche pasticcio.
    }

    //La funzione restituisce sicuramente qualcosa perche' uno dei due rami dell'if viene sicuramente eseguito

}


int main(){

    int a;
    int b;
    


    cout << "Inserire a > 0, b > 0" << endl; //Sampa a video!
    cin >> a;
    cin >> b;
    cout << "letto valore "<< a <<endl;
    cout << "letto valore "<< b <<endl;


    cout << endl << "MCD(" <<a << "," << b <<") = " << MCD(a,b) << endl;
    
    return 0;
}
