#ifndef item_h
#define item_h

#include <iostream>
#include <string>

using namespace std;

class item{
        string  itemName;
        int     quantityOrdered;
        double  costPerItem;

    public:
        item();
        item(string name, int quantity, double cost);
        ~item();

        string  getItemName();
        int     getQuantityOrdered();
        double  getCostPerItem();
        void    print();
};
#endif