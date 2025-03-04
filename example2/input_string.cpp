#include <iostream>
#include <string.h>
using namespace std;
 
int main() {
 string firstName, lastName; 
 string joinName; 
 cout << "Type your first Name ";
 cin >> firstName; 
 cout << "Your second Name ";
 cin >>  lastName; 
cout << "Your full name is " << firstName.append(" ").append( lastName) << endl;
    return 0;
}