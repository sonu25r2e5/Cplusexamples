#include <iostream>
using namespace std;
 
int main() {
    // print the multiplication of specific table 
    int num = 5;
    for (int i = 1; i <= 20; i++) {
        if (i == 16)
        {
            /* code */
            continue; // it skips the 16th table
        }
        
        cout << num << " * " << i << " = " << num * i << endl;
    }
    return 0;
}