#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase(){
    itemName = "";
    itemPrice = 0.00;
    itemQuantity = 0;
}
void ItemToPurchase::SetName(string itemNameIn){
    itemName = itemNameIn;
}
string ItemToPurchase::GetName(){
    return itemName;
}
void ItemToPurchase::SetPrice(double itemPriceIn){
    itemPrice = itemPriceIn;
}
double ItemToPurchase::GetPrice(){
    return itemPrice;
}
void ItemToPurchase::SetQuantity(int itemQuantityIn){
    itemQuantity = itemQuantityIn;
}
int ItemToPurchase::GetQuantity(){
    return itemQuantity;
}
