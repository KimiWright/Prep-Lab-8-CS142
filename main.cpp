#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

#include "ItemToPurchase.h"

int main(){
  vector <ItemToPurchase> itemsVector(2);
  string tempString = "";
  double tempDouble = 0.00;
  int tempInt = 0;
  double tempTotalCost = 0.00;
  double totalCost = 0.00;
  
  for(unsigned int i = 0; i < itemsVector.size(); ++i){
      cout << "Item " << i + 1 << endl;
      cout << "Enter the item name: " << endl;
      getline(cin, tempString);
      itemsVector.at(i).SetName(tempString);
      cout << "Enter the item price: " << endl;
      cin >> tempDouble;
      itemsVector.at(i).SetPrice(tempDouble);
      cout << "Enter the item quantity: " << endl;
      cin >> tempInt;
      itemsVector.at(i).SetQuantity(tempInt);
      cin.ignore();
  }
  
  cout << "TOTAL COST" << endl;
  for(unsigned int i = 0; i < itemsVector.size(); ++i){
      tempTotalCost = itemsVector.at(i).GetQuantity() * itemsVector.at(i).GetPrice();
      cout << itemsVector.at(i).GetName() << " " << itemsVector.at(i).GetQuantity() << " @ $" << fixed << setprecision(2) << itemsVector.at(i).GetPrice()
        << " = $" << tempTotalCost << endl;
      totalCost += tempTotalCost;
  }
  cout << endl << "Total: $" << totalCost << endl;
  
  return 0;
}
