#include <iostream>
#include <string.h>
using namespace std;

int main() {

    string cats[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cats[0] = "Sonu Nigam";
    cats[1] = "Kumar Sanu";
    cats[2] = "Udit Narayan";
    cats[3] = "Abhijeet"; 
    cout << cats[0] << endl;
    cout << cats[1] << endl;    
    cout << cats[2] << endl;
    cout << cats[3] << endl;

    return 0;
}