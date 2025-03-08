#include <iostream>
#include <string.h>
using namespace std;
 // global variables. 
int x = 5; 

void localScope(){

// int x = 23 ;
cout << ++x <<  '\n';// local scope  pre-increment 
// x++ post increment 

}

int main() {
   
    localScope();
   cout << x; // it is gloval variables
    return 0;
}