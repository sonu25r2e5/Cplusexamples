#include <iostream>
#include <string.h>
using namespace std;
float toCelsius(int fahrenheit); 

int main() {
   // setting a fahrenheit 
   float f_value = 98.8; 

   // calling the function with fahrenheit value 
   float result = toCelsius(f_value);
     //print the fahrenheit value
     cout << "Fahrenheit: " << f_value << endl; 

     // print the result 
     cout << "Convert the fahrenheit to celsius "<< result << endl; 
   
    return 0;
}

float toCelsius(int fahrenheit){
return(5.0/9.0) * (fahrenheit - 32);

}