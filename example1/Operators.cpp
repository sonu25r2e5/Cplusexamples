#include <iostream>
using namespace std;
 
int main() {
 int sum1 = 100 + 50;        // 150
    int sum2 = sum1 + 250;      // 400
    int sum3 = sum2 + sum2;     // 800
    int sum4 = sum3 + sum3;     // 1600
    cout << sum1 << endl; 
    cout << sum2 << endl;
    cout << sum3 << endl;
    cout << sum4 << endl;
    return 0;
}