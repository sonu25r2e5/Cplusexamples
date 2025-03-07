#include <iostream>
#include <string.h>
using namespace std;
 
int main() {
    int dice = 1 ; 
    string statement  =  (dice < 6) ? "you have no Yatchyz" : "you have a Yatchyz";
    while (dice <= 6)
    {
        cout << statement << endl;
        dice ++;
    }   
//  cout << "Hello World!";
    return 0;
}