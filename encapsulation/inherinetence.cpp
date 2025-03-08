#include <iostream>
#include <string.h>
using namespace std;

//createing a base calss
class Vehicle{
public: 
string brand = "frod"; 
void honk1() {
    cout << "Tuut Tuut \n"; 
}

void bikeHonk2(){

    cout << "peep peep";
}

};
// for car 
class Car: public Vehicle {
    public: 
    string model = "mustang";

} ;


int main() {
    Car myCar;
    cout << myCar.brand + " " + myCar.model << endl; 
    myCar.honk1(); 
    return 0;
}