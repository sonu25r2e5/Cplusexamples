// make a car of your own and use to convert the uppercase all the objects. 

#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

class MyBike {
public:
string brandName; 
string modelName; 
int year; 
// public: 
 MyBike(string x, string y, int z) {
    
    //for converting the string of x into uppercase and 
    // for converting the string of y into uppercase. 
    transform(x.begin(),x.end(), x.begin(), :: toupper);
    transform(y.begin(), y.end(), y.begin(), :: toupper); 
    brandName = x; 
    modelName = y; 
    year = z; 
}

};

int main() {

   
     MyBike myObj1("honda", "fz2332", 1992);

     MyBike mySeondbike("yamaha", "fz23", 1992);
    MyBike myThirdbike("appirlla", "apria232", 2020); 
    MyBike myfourthbike("BMW", "bmw23", 2023);
    MyBike myfifthbike("BMW", "bmw23", 2024);
    MyBike mysixthbike("Yolyo", "yolvo231", 1992);
    MyBike myseventhbike("Chinaedo", "chania293", 1992);

    // transform();


cout << myObj1.brandName.append(" ") << myObj1.modelName.append("\t") << myObj1.year << '\n'; 
cout << mySeondbike.brandName << " " << mySeondbike.modelName << " " << mySeondbike.year << "\n";
cout << myThirdbike.brandName << " " << myThirdbike.modelName << " " << myThirdbike.year << "\n";
 cout << myfourthbike.brandName << " " << myfourthbike.modelName << " " << myfourthbike.year << "\n";
 cout << myfifthbike.brandName << " " << myfifthbike.modelName << " " << myfifthbike.year << "\n";
 cout << mysixthbike.brandName << " " << mysixthbike.modelName << " " << mysixthbike.year << "\n";


 return 0;
}