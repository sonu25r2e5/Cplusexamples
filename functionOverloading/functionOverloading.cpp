#include <iostream>
#include <string.h>

using namespace std;
int plusFunc(int, int);  // same name but it has value of int
 double plusFunc(double, double) ;  // same name but it has value of double
int main() {
   int myNum1 = plusFunc(2,4);
   double myNum2 = plusFunc(5.23, 2.54); 
   cout << "Int value: " << myNum1 << endl; 
   cout << "Double value "<< myNum2 << endl; 
   
    return 0;
}

int plusFunc(int x, int y) {
return x+ y; 

}


double plusFunc(double x , double y) {
return x + y; 

}