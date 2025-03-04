#include <iostream>
#include <string.h> 
using namespace std;
 
int main() {
    string firstName; 
    string lastName; 
    string fullName;
    firstName = "Sonu";
    lastName = "Kumar";
    // fullName = firstName + " " + lastName;
    fullName = firstName.append(" ").append(lastName);
    cout << fullName << endl;
    return 0;
}