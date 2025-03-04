#include <iostream>
using namespace std;
 
int main() {
 int myAge ;
 int voting_age = 18; 
 cout << "enter your age ";
 cin >> myAge;
    if (myAge >= voting_age) 
    {
        cout << "you are eligible to vote";

    }
    else
    {
    cout << " Legally , voting age is 18 years so, You need to wait  " <<   voting_age - myAge  <<  "   years to vote, kindly exit " << endl;
    }
    
    
    return 0;
}