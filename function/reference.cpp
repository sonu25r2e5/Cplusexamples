#include <iostream>
#include <string.h>
using namespace std;
 void swapNumb(int &a, int &b );    // reference should be with & operator. 
int main() {
   int firtNum = 10; 
   int secondNum = 20; 
   cout << "before swap: " << endl ;
   cout << firtNum << secondNum << endl; 
   // call the function it will swap the numbers
   swapNumb(firtNum, secondNum);
cout <<"after swap the number will be " << endl ; 
cout << firtNum << secondNum << endl; 
     
   
//  cout << "Hello World!";
    return 0;
}


void swapNumb(int &a, int &b) { 
int z = a; 
a = b; 
b= z; 


}