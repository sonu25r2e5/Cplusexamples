#include <iostream>
#include <string.h>
using namespace std;
int twoPara(int , int); 

int main() {
   
     cout << twoPara(2,3) << endl; 
     cout << "two parameter is 2 + 3 is " << twoPara(2,3) << endl;  
   
//  cout << "Hello World!";
    return 0;
}


int twoPara(int a, int b){
return a + b; 


}