#include <iostream>
using namespace std;
 
int main() {
    // simple calculator. 
    int x , y , sum, mul, div, sub;
    // sum = x + y; don't place here it will display sum of 8
    cout << "Type an integer: ";
    cin >> x;
    cout << "Type another integer: ";
    cin >> y;

    sum = x + y; // place here it will give you right results
    mul = x * y;
    div = x / y;
    sub = x - y;
    cout << "You typed: " << x << endl;
    cout << "You typed: " << y << endl;
    cout << "Sum of the two integers:\t" << sum << endl;
    cout << "Multiplication of the two integers:\t" << mul << endl;
    cout << "Division of the two integers:\t" << div << endl;
    cout << "Subtraction of the two integers:\t" << sub << endl;
    return 0;
}