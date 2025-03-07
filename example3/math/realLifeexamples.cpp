#include <iostream>
using namespace std;
 
int main() {
    int ages[5] = {18, 22, 25, 30, 35}; // array of ages 18+22+25+30+35 = 130 
    // 130/5 = 26
    float avg, sum = 0; 

int i; 
int l = sizeof(ages);
//get the length of the array 
// sizeof(ages) = 4*5 = 20
// sizeof(ages[0]) = 4  
int length = sizeof(ages)/sizeof(ages[0]);  // 20\4 = 5

// loop through the elements of array. 
for (int age : ages) 
  sum +=age; 

  avg = sum / length; 

  // average value given out 
  cout << "Average value of the array elements is: " << avg << endl;

    cout << l; 


    return 0;
}