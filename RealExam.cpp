#include <iostream>
using namespace std;
 
int main() {
int items ; 
double cost_per_item; 
double total_cost; 
char currency = '$';

items = 5;
cost_per_item = 8.5;
total_cost = items * cost_per_item;;

// print variables. 
cout << "Items: " << items << endl;
cout << "Cost per item: " << currency << cost_per_item << endl;
cout << "Total cost: " << currency << total_cost << endl;



}