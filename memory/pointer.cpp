#include <iostream>
#include <string.h>
using namespace std;
 
int main() {
 string food = "pizza";
 string* ptr = &food; 
 
 cout << food << endl; 

cout << &food << endl; 

cout << ptr << endl; 
     
   
 cout << "Hello World!";
    return 0;
}