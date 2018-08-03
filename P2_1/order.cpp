#include "order.h"

order   :: order(){
    cout <<"order class constructed" << endl;
    items = 0;
}

order   :: order(string cName, string cID, int sizeOrder){
    customerName = cName;
    orderID = cID;
    orderSize = sizeOrder;

    items = new item*[orderSize];
    for (int i = 0; i < orderSize; i++){
        items[i] = 0;
    }     
}
order   :: order(string cName, string cID, item** itemList, int sizeOrder,int sizeList){
    customerName = cName;
    orderID = cID;
    currentSize = sizeList;
    orderSize = sizeOrder;
 
    items = new item*[orderSize];
    for (int i = 0; i < sizeOrder; i++){
        if (i < currentSize){
            items[i] = itemList[i];
        }
        else{
            items[i] = 0;
        }
    }
}

order   :: ~order(){
    for(int i = 0;i < orderSize;i++){
        if(items[i] != 0){
            delete items[i];
            items[i] = 0;
        }
    }
    delete items;
    items = 0;
}

int     order :: addItem(item* i){
    for(int index = 0; index < orderSize; index++){
        if (items[index] == 0){
            item *deepCopy = new item(i->getItemName(),i->getQuantityOrdered(),i->getCostPerItem());
            items[index] = deepCopy;
            currentSize++;
            return (index);
        }
    }
    return (-1);
}

double  order :: tallyCost(){
    double  sum;

    sum = 0;
    for (int i = 0; i < currentSize;i++){
        sum += items[i]->getQuantityOrdered() * items[i]->getCostPerItem();
    }
    return (sum);
}

item**  order :: getItems(){
    return (items);
}

string  order :: getCustomerName(){
    return (customerName);
}

string  order :: getOrderID(){
    return (orderID);
}

int     order :: getCurrentSize(){
   return (currentSize);
}

int     order :: getOrderSize(){
    return (orderSize);
}