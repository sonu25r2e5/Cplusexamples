#include <iostream>
using namespace std;
 
int main() {
    int i; 
    cout << "Even numbers between 0 to 10 are: " << endl;
    for ( i = 0; i <= 10; i= i+2)
    {
cout << i << "\t" ;
        if (i == 10 ) {
    cout << "\n";
                }
    }

    cout << "odd numbers between 0 to 10 are: " << endl;
    for ( i = 1; i <=10; i+=2)
    {
    cout << i << "\t";
    }
    
    return 0;
}