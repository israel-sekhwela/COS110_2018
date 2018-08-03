#ifndef order_h
#define order_h

#include "item.h"
#include <string>

using namespace std;
class order{
        item**  items;
        string  customerName;
        string  orderID;
        int     orderSize;
        int     currentSize;

    public:
        order();
        order(string cName, string cID, int sizeOrder);
        order(string cName, string cID, item** itemList, int sizeOrder,int sizeList);
        ~order();

        int     addItem(item* i);
        double  tallyCost();
        item**  getItems();
        string  getCustomerName();
        string  getOrderID();
        int     getCurrentSize();
        int     getOrderSize();
};
#endif