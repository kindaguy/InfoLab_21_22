#include <iostream>
#include <cmath> //Contiene funzioni "matematiche", quali pow (elevamento a potenza), log, sin...

//Dichiarazione: dominio, codominio, nome
//!Nome univoco della funzione: nome(dominio)
//!non si possono definire due funzioni che differiscano solo per il codominio!
float media(float [],int); //Notare che compaiono solo gli insiemi f: D -> C

//Definizione: quasi una ripetizione della dichiarazione, ma qui compaiono i nomi degli
//argomenti, qui x e n
float media(float x[], int n){

    float accu = 0.f;
    int i = 0;



    while(i < n){
        accu  = accu + x[i];
        i++; //aka i=i+1;
    }

    //Valore restituito dalla funzione.
    return accu/n;
}


float stddev(float [], int);

float stddev(float x[], int n){

    float accu = 0;

    float m;

    int i = 0;

    m = media(x,n);

    while(i<n){
        accu  = accu +pow(x[i] - m,2); 
        i++;
    }

    return sqrt(accu/n);
} 

using namespace std;

int main(){
    float v1[5] = {1.f,2.f,3.f,4.f,5.f};
    float v2[4]={11.f,12.f,13.f,14.f};
    int dim1 = 5;
    int dim2 = 4; 
    float m1,m2;
    float std1,std2;

    m1 = media(v1,dim1);
    m2 = media(v2,dim2);
    std1 = stddev(v1,dim1);
    std2 = stddev(v2,dim2);

    cout << endl << "Media 1 = " << m1 << endl;
    cout << endl << "Media 2 = " << m2 << endl;
    cout << endl << "stddev 1 = " << std1 << endl;
    cout << endl << "stddev 2 = " << std2 << endl;
    
}