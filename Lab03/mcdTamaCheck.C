
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
 
    int res;

    do{
       cout << "Inserire a , b > 0" << endl;
       cin >> a >> b;
    } while(a <=0 or b<=0);

    //Se esco dal while sono sicuro che i dati inseriti
    //siano conformi alle specifiche


    res =  MCD(a,b);

    cout << endl << "MCD(" <<a << "," << b <<") = " << res << endl;
    
    return 0;
}


