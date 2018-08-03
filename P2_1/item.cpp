#include "item.h"

item :: item(){
    cout << "item class constructed" << endl;
}

item :: item(string name, int quantity, double cost){
    itemName = name;
    quantityOrdered = quantity;
    costPerItem = cost;
}

item :: ~item(){
    cout << "item deleted" << endl;
}

string  item :: getItemName(){
    return (itemName);
}

 int    item :: getQuantityOrdered(){
     return (quantityOrdered);
 }
double  item :: getCostPerItem(){
    return (costPerItem);
}
void    item :: print(){
    cout << "Name: " << itemName << endl;
    cout << "Quantity: " << quantityOrdered << endl;
    cout << "Cost Per Item: " << costPerItem << endl;
}