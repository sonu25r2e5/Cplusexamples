#include <iostream>
#include <string.h>
using namespace std;
 
// creating a class of employee
class Employee{

private: 
    int userSalary; 
public: 
string username; 
string userPost; 
//setter 
void setSalary(int s){
    userSalary = s; 
}

// Getter 
int getSalary(){
    return userSalary; 
}

}; 


int main() {
   Employee ram, sita, shyam, hari; 
   ram.username = "ram";
   ram.userPost = "teacher";
   ram.setSalary(4000);
   cout<< ram.username << " is a  " << ram.userPost << " whose salary is  " <<  ram.getSalary() << endl; 

   // sita
   sita.username = "sita";
   sita.userPost = "engineer";
   sita.setSalary(3400);
   cout << sita.username << "is a  " << sita.userPost << " whose salary is   " << sita.getSalary() << endl;

   //shyam 
   shyam.username = "shyam";
   shyam.userPost = "peon";
   shyam.setSalary(400);
   cout << shyam.username << " is a " << shyam.userPost << " whose salary is  " << shyam.getSalary() << endl;  


    return 0;
}