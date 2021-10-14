#include <iostream>

using namespace std;

int main(){

    int a = 5;
    int b = 2;
    int c;
    float d1,d2,d3;

    c = a/b;
    d1 = a/b;

    d2 = (float)a/b; 
    //d2  = (1.f * a)/b 

    d3 = (a/b) / d1;

    cout << endl << "c = " << c << endl;
    cout << endl << "d1 = " << d1 << endl;
    cout << endl << "d2 = " << d2 << endl;
    cout << endl << "d3 = " << d3 << endl;

    return 0;
}