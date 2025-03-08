#include <iostream>
#include <string.h>
using namespace std;
 
class MyClass {
public:     // access specifier
int myNum;  // atribute 
string myString; // attribute. 
};


int main() {
    
    MyClass grade_one; 

        grade_one.myNum = 1; 
        grade_one.myString= "Grade One";

        cout << grade_one.myNum << endl; 
        cout << grade_one.myString << endl; 
    // myNum = 13;
    return 0;
}