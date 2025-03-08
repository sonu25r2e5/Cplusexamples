#include <iostream>
#include <string.h>
using namespace std;
int x = 5; 

void myScope(); 

int main() {
   
     myScope();
   
    return 0;
}

void myScope(){

    cout << x; 
//we can't use return in void function. as void doesn't return any 
// any value. 
}

