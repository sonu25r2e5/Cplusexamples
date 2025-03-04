#include <iostream>
using namespace std;
 
int main() {
 // Modulus 
 int x = 4; 
 int y = 6 ; 
 double mod = x % y;
 x++;
 y++;
 x--;
y--;
    cout << mod << endl;
    cout << x << endl;
    cout << y << endl;
    return 0;
}