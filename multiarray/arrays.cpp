#include <iostream>
#include <string.h>
using namespace std;
void myArray(int myNum[5]); 


int main() {
   
int myNum[5]= {1,2,3,4,5};
myArray(myNum);
     
    return 0;
}


void myArray(int myNum[5]){
    int i;
    for (i= 0; i<5;i++){
        cout << myNum[i]<<endl; 
    }

}