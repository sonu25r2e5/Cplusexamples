#include <iostream>
using namespace std;
 
int main() {
 int numbers = 12345; 
 int reverse = 0;

 while (numbers > 0)
 {
    // GEt the last number reverse = reverse * 10 + numbers % 10;
     reverse = reverse * 10 + numbers % 10;
        // remove the last number
     numbers = numbers / 10;
 }
 cout << "Reverse of the number is " << reverse << endl;
    return 0;
}