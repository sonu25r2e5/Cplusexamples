#include <iostream>
#include <string.h>
using namespace std;
 
int main() {
   
  string food = "pizza";
  string &meal = food; 
  
  cout << food << endl; 
  cout << meal << endl; 
   
 cout << "Hello World!";
    return 0;
}