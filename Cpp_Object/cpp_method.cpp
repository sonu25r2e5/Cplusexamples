#include <iostream>
#include <string.h>
using namespace std;
 
class myCar{
    public: 
    // inside the class 
    string userName; 
    string carName; 
    int carYear; 
    int index; 
    // internal function by using specifier using :: 
        void carSpeed() {
            cout << "\tand acceralte it with\t ";
        }
        void hornSound();
};

//external access by usiong :: 
void myCar::hornSound(){
    cout << "horn sound by making beep sound\n ";
}

int main() {

   myCar speed; 
   myCar queen;
   myCar hari;  
   speed.index = 1; 
   speed.userName = " speed";
   speed.carName ="Honda" ;
   speed.carYear = 2012;
    // queen 
    queen.index =2 ;
    queen.userName = " queen";
    queen.carName = "Zinda";
    queen.carYear = 2015; 
   // hari
   hari.index = 3;
   hari.userName = " hari";
   hari.carName = "Yama";
   hari.carYear = 1992; 
   
   // spped
   cout << speed.index << speed.userName.append(" has a ") << speed.carName.append(" car which he buys in ") << speed.carYear; 
   speed.carSpeed();
   speed.hornSound(); 
   // queen 
   cout <<queen.index <<  queen.userName.append(" has a ") << queen.carName.append(" car which she buys in ") << queen.carYear; 
   queen.carSpeed(); 
   queen.hornSound(); 
   // hari
   cout <<hari.index <<  hari.userName.append(" has a ") << hari.carName.append(" car which he buys in ") << hari.carYear; 
   hari.carSpeed(); 
   hari.hornSound();
   return 0;

}