#include <iostream>
#include <string.h>
using namespace std;
void modifyString(string &str); 


int main() {
   
    string greetting = "hellow";
    cout << "before swapping the text" << endl; 
    cout << greetting << endl;
    modifyString(greetting);
    cout << "after swaing or replacing the text with function "  << endl; 
    cout << greetting << endl; 
//  cout << "Hello World!";
    return 0;
}

void modifyString(string &str){
str = "world class";

}