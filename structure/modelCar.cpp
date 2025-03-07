#include <iostream>
#include <string.h>
using namespace std;
 





int main() {
   
    struct car {

        string name;
        string color;
        int price;
        int year;
    
     };
 
 car car1, car2, car3; // Car1 is a variable of car structure.
    car1.color = "Red";
    car1.price = 1000000;
    car1.year = 2021;

    car2.name = "Suzuki";
    car2.color = "Blue";
    car2.price = 500000;
    car2.year = 2020;

    car3.name = "Honda";
    car3.color = "Black";
    car3.price = 800000;
    car3.year = 2019;

cout << car1.name << " " << car1.color << " " << car1.price << " " << car1.year << endl;
cout << car2.name << " " << car2.color << " " << car2.price << " " << car2.year << endl;
cout << car3.name << " " << car3.color << " " << car3.price << " " << car3.year << endl;

    return 0;
   
 cout << "Hello World!";
    return 0;
}