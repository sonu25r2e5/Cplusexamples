#include <iostream>
#include <string.h>
using namespace std;
int sum(int); 


int main() {
   
     int result = sum(10);
   cout << result; 
    return 0;
}

int sum(int k){
    if (k>0)
    {
        /* code */
        return k + sum(k-1);
    } else 
    {

        return 0; 
    }

     
}