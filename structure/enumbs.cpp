#include <iostream>
using namespace std;
 
int main() {
   
 enum Level {
    EASY =23, MEDIUM = 33 , HARD =43

 } myVar1, myVar2, myVar3; 

 myVar1 = MEDIUM;
 myVar2 = HARD;
 myVar3 = EASY;

  cout << myVar1 << endl << myVar2 << endl << myVar3;  
    return 0;
}