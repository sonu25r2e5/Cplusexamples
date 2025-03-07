#include <iostream>
#include <string.h>
using namespace std;
 
int main() {
    string food = "pizza"; // variable declaration 
    //claration
    string* ptr = &food;    // Pointer declaration
  
    // Reference: Output the memory address of food with the pointer
    cout << ptr << "\n";
  
    // Dereference: Output the value of food with the pointer
    cout << *ptr << "\n";
     
   
 cout << "Hello World!";
    return 0;
}