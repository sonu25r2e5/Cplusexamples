#include <iostream>
#include <string.h>
using namespace std;
//base class
 class Employee{
    protected: 
    int salary; 
    public: 
    int total;
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
    };

    int addtotal(int s){
    return  total = s + total + bonus; 

    };
 };




int main() {
    int d; 
   programmer myObj; 
    myObj.setSalary(5500); 
   d = myObj.getSalary();
   myObj.bonus = 15000; 
   myObj.total = 0; 

   cout << "Salary: " << myObj.getSalary() << "\n";
   cout << "Bonus: " << myObj.bonus << "\n"; 
   cout << "Total: " << myObj.addtotal(d) << "\n";
       return 0;
}