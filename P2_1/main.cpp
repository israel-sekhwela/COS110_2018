#include <iostream>
#include "order.h"
#include "item.h"

using namespace std;
int main(){
    //instantiate objects
    order oders;

    cout << "\n\n---------------------------\n";
    cout << "\tSimulation\n\n";

    //items Constructor
    item items("Potatoes", 25, 1.25);
    
    //adding item
  //  oders.addItem(&items);

    //print function
    items.print();
    cout<<endl;

    return (0);
}