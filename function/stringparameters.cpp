#include <iostream>
#include <string.h>
using namespace std;
void stringName(string fname, string lname);    // fname and lname are parameters


int main() {

   
     stringName("lita","Kumar");    // lita and kumar are arguments. 
     stringName("ram","verma"); 
     stringName("Shakti","Kapoor"); 
     stringName("Nita","Kapoor"); 
   
//  cout << "Hello World!";
    return 0;
}

void stringName(string fname, string lname){
cout << fname.append(" ").append( lname) << endl; 
}

// parameter are the variables inside the function that receives the data 