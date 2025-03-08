#include <iostream>
#include <string.h>
using namespace std;

//base class
class myfather{
    public: 
    void father_charc(){
        cout << "father character" << endl;
    }
};

//base class2
class myMother{
    public:
    void mother_char(){
        cout << "mother character" << endl;
    }
};


//derived class
class mySon : public myfather , public myMother{
};




int main() {
   mySon obj1; 
   obj1.father_charc();
   obj1.mother_char(); 
     
   
    return 0;
}