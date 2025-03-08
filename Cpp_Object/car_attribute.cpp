#include <iostream>
#include <string.h>
using namespace std;
 
class MyCar{
   public: 
    string carName; 
    string carModel; 
    int startYear; 
};

int main() {
    MyCar  firstCar,secondCar, thirdCar; 
 //first car
    firstCar.carName = "Maruti suzuki";
    firstCar.carModel= "299"; 
    firstCar.startYear = 1999; 
     // second car
     secondCar.carName ="mercedes ";
     secondCar.carModel = "223";
    secondCar.startYear = 2000; 
    // third car 
    thirdCar.carName = "Ferrari";
    thirdCar.carModel = "333"; 
    thirdCar.startYear = 1995; 

    cout << firstCar.carName << firstCar.carModel.append(" ") << firstCar.startYear << endl; 
    cout << secondCar.carName << secondCar.carModel.append(" ") << secondCar.startYear << endl; 
    cout << thirdCar.carName << thirdCar.carModel.append(" ") << thirdCar.startYear << endl;    
    return 0;
}