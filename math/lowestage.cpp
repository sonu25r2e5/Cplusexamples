#include <iostream>
using namespace std;
 
int main() {
int ages[5] =  {18, 22, 35, 30, 35}; // array of ages 18+22+25+30+35 = 130
int i; 
int length = sizeof(ages)/sizeof(ages[0]);  // 20\4 = 5
int lowestAge = ages[0];
int highestAge = ages[0];
for (int age:  ages )
{
    if (lowestAge > age)
    {
        lowestAge = age;
    }
    if (highestAge < age)
    {
        /* code */
        highestAge = age;
    }
    

    
}
cout << "The highest age is: " << highestAge << endl;
cout << "The lowest age is: " << lowestAge << endl;
    return 0;
}