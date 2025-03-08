#include <iostream>
#include <string.h>
using namespace std;
void scope(); 


int main() {
   
    scope();
     
   
    return 0;
}


void scope(){

    int x=5; 
    cout << x; 
}