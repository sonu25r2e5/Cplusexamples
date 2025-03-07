#include <iostream>
#include <string.h>
using namespace std;
 
int main() {
    int i ; 
string cars[10] = {"Volvo", "BMW", "Ford", "Mazda", "Tata", "Mahindra", "Maruti", "Hyundai", "Toyota", "Kia"};
int modelNumbers[10] = {9842, 330, 3220, 4110, 52230, 6220, 7220, 82220, 92220, 10220};
// for ( i = 0; i < 10; i++)
// {
//     /* code */
//     cout << "car" << "[" << i <<"]"  <<  "=" <<cars[i]  << "\t" ;
//     cout << "modelNumbers"<<" [" <<i << "]"  <<  "=" <<modelNumbers[i]  << endl;
// }

for ( string cars : cars ) {
    cout << cars << endl  << modelNumbers << endl;
}


// for ( int modelNumbers : modelNumbers ) {
//     cout << modelNumbers  << endl;

// }
// for ( i = 0; i < 10; i++)
// {
//     /* code */
// }

    return 0;
}