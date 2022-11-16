#include <iostream>
using namespace std;
class Inventory {
private:
 int itemNumber;
 int quantity;
 double cost;
 double totalCost;

public:
 Inventory()  // Declare using default constructor
 {
  itemNumber = 0;
  quantity = 0;
  cost = 0;
  totalCost = 0;
 }
 Inventory(int newItemNumber, int newQuantity, double newCost) {
  itemNumber = newItemNumber;
  quantity = newQuantity;
  cost = newCost;
  setTotalCost(quantity, cost);
 }

 void setItemNumber(int) { itemNumber = itemNumber; }
 void setQuantity(int) { quantity = quantity; }
 void setCost(double) { cost = cost; }
 void setTotalCost(int, double) { totalCost = quantity * cost; }

 int getItemNumber() { return itemNumber; }
 int getQuantity() { return quantity; }
 double getCost() { return cost; }
 double getTotalCost() { return totalCost; }
};

int main() {
//Declare vars
 int itemNumber;
 int quantity;
 double cost;
 double totalCost;

 Inventory();
 {
  itemNumber = 0;
  quantity = 0;
  cost = 0;
  totalCost = 0;
 }
 cout << "Enter item number: ";//Get item
 cin >> itemNumber;
//Check item
 while (itemNumber < 0) {
  cout << "Error. Please enter a positive value for the item number: ";
  cin >> itemNumber;
 }
 cout << "Enter item quantity: ";//Get quantity
 cin >> quantity;
//Check quantity
 while (quantity < 0) {
  cout << "Error. Please enter a positive value for the quantity: ";
  cin >> quantity;
 }
 cout << "Enter item cost: ";//Get cost
 cin >> cost;
//Check cost
 while (cost < 0) {
  cout << "Error. Please enter a positive value for the cost: ";
  cin >> cost;
 }
 Inventory information(itemNumber, quantity, cost);
 totalCost = information.getTotalCost();
 itemNumber = information.getItemNumber();
 quantity = information.getQuantity();
 cost = information.getCost();
//Print summary
 cout << "Inventory Summary\n";
 cout << "=================\n";
 cout << "Item number: " << itemNumber << endl;
 cout << "Item quantity: " << quantity << endl;
 cout << "Item cost: " << cost << endl;
 cout << "-----------------\n";
 cout << "Total Cost: " << totalCost
      << endl;
 return 0;
}