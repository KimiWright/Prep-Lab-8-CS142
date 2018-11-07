#ifndef ITEMTOPURCHASE_H
#define ITEMTOPURCHASE_H

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;
class ItemToPurchase{
    private:
        string itemName;
        double itemPrice;
        int itemQuantity;
    public:
        ItemToPurchase();
        void SetName(string itemNameIn);
        string GetName();
        void SetPrice(double itemPriceIn);
        double GetPrice();
        void SetQuantity(int itemQuantityIn);
        int GetQuantity();
};

#endif
