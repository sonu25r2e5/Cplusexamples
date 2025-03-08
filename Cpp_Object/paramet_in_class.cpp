#include <iostream>
#include <string.h>
using namespace std;
 
class Class {
public: 
    int speed(int maxSpeed){
        return maxSpeed; 
    }

};


int main() {
   Class myObj; 
   cout << myObj.speed(200);
     
   
    return 0;
}