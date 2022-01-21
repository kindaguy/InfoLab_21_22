#include <iomanip>

using namespace std; 

template <typename T1, typename T2>
float dist(T1 d1, T2 d2){

   return sqrt(pow(d1.x - d2.x,2) + pow(d1.y-d2.y,2));

}


ostream& operator <<(ostream & str, const misura & dato){
      
      cout << setw(10) << dato.x << "\t" << dato.y << endl;

      return str;
}

int a = 3; 
float b = 3.2f;

cout << a << b ;