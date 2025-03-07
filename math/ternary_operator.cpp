#include <iostream>
using namespace std;
 
int main() {
int voting_age = 5;
string result = (voting_age >=18) ? "you are eligible" : "your are underage";
cout << result ; 
    return 0;
}