#include <iostream>
#include <string.h>
using namespace std;
//base class
class MyClass{
public: 
    void myFunction(){
        cout << "some of the  content located in parent class ";
    }

}; 

//Derived Class // son
class myChild : public MyClass {

};

//Derived Class Grand-Son 
class myGrandChild : public myChild {

};


int main() {
   
    myGrandChild myobj; 
    myobj.myFunction();
     
   
    return 0;
}