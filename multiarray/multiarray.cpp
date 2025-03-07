#include <iostream>
#include <string.h>
using namespace std;
 
int main() {
   
string letters[2][4] = {
        {"a", "b", "c", "d"}, // {[0][0],[0][1],[0][2],[0][3]}
        {"e", "f", "g", "h"},   // {[1][0],[1][1],[1][2],[1][3]}
        // {"e", "f", "g", "h"}
    };

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << letters[i][j] << " ";
            }
            cout << endl;
        }
         

cout << letters << endl;    
//  cout << "Hello World!";
    return 0;
}