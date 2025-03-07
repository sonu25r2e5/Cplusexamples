#include <iostream>
#include <string.h>
using namespace std;


int  input(int &a, int &b) { // should pass the data by reference 
    // and use & operator. 
    cout << "what is your age: ";
    cin >> a; 
    cout << "which class do you read: ";
    cin >> b; 
return 0;
}


int write(int a, int b) {
    cout << "you age is " << a << endl; 
    cout << " you read in class " << b << endl; 
    // cout << "My write function executes here";
    return 0; 
}


int main() {
   int a , b; 
   input(a,b);
 write(a,b); 

    

   
//  cout << "Hello World!";
    return 0;
}