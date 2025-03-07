#include <iostream>
using namespace std;
 
int main() {

int i , j; 
for ( i = 0; i <=2; i++)
{
    
    cout << "outer: " << i << "\n";

for ( j = 1; j <=3; j++)

    cout << " inner: " << j << "\n";



}
return 0;

}