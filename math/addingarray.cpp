#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
 
int main() {

vector <string> cars = {"Volvo", "BMW", "Ford", "Mazda", "Tata", "Mahindra",};
// cars.push_back("Maruti");
cars.pop_back();
cars.pop_back();
for (string cars: cars)
{
    /* code */
cout << cars << "\t"; 

}
}