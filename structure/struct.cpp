#include <iostream>
#include <string.h>
using namespace std;
 
int main() {
   
    //One strucute in variable. 
    struct
    {
        string name;
        int age; 
        double rupess;

    } JohnStruct, JaneStruct, HariStruct , GopalStruct; 

    // John 
    JohnStruct.name = "John";
    JohnStruct.age = 25;
    JohnStruct.rupess = 100.50;

    // Jane
    JaneStruct.name = "Jane";
    JaneStruct.age = 30;
    JaneStruct.rupess = 200.50;

    //Hari 
    HariStruct.name = "Hari";
    HariStruct.age = 23; 
    HariStruct.rupess = 300.50;

    //Gopal
    GopalStruct.name = "Gopal";
    GopalStruct.age = 35;
    GopalStruct.rupess = 500.50;

  
     
// for john 
    cout << "Name: " << JohnStruct.name << endl;
    cout << "Age: " << JohnStruct.age << endl;
    cout << "Rupess: " << JohnStruct.rupess << endl;
    cout << endl;

    // for Jane
    cout << "Name: " << JaneStruct.name << endl;
    cout << "Age: " << JaneStruct.age << endl;
    cout << "Rupess: " << JaneStruct.rupess << endl;
    cout << endl;

    // for Hari
    cout << "Name: " << HariStruct.name << endl;
    cout << "Age: " << HariStruct.age << endl;
    cout << "Rupess: " << HariStruct.rupess << endl;
    cout << endl;
    
    return 0;
}