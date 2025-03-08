#include <iostream>
#include <string.h>
using namespace std;
//base class
 class Employee{
    protected: 
    int salary; 
 };

 //Derived class 
 class programmer : public Employee {
    public: 
    int bonus; 
    void setSalary(int s ) {
        salary = s; 
    };
    int getSalary(){
        return salary; 
    }
 };




int main() {
   programmer myObj; 
   myObj.setSalary(233); 
   myObj.bonus = 15000; 
   cout << "Salary: " << myObj.getSalary() << "\n";
   cout << "Bonus: " << myObj.bonus << "\n"; 
    return 0;
}