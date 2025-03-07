#include <iostream>
#include <string.h>
using namespace std;
int addFun(int); 

int main() {
   int x, d; 
     cout << "Tell me any number \n";
     cin >> x ; 
addFun(x);
d = addFun(x);
cout << "the addition of given number with 5 is \t" << d << endl; 

   
//  cout << "Hello World!";
    return 0;
}


int addFun(int x){
    return 6 + x; 
}