/*

Program name: BasketballPlayer

Programmer name: Micah Hacker

Decription:
Allows the user to enter a height in inches and convert it to feet inches format.

*/
#include <iostream>
//Import cmath so we can use trunc()
#include <cmath>

using namespace std;

int main()
{
  //Declare our needed variables
  int totalinches, feet, inches;
  //Ask user for total inches
  cout << "Enter the amount of inches you want to convert to feet / inch form: ";
  //Get inches
  cin >> totalinches;
  //Calculate the amount of feet within those inches and remove the decimals
  feet = trunc(totalinches / 12);
  //Calculate the remaining inches after dividing by 12
  inches = totalinches % 12;
  //Display calculated data to user
  cout << "\n~~~[Height Calculations]~~~\n{Total inches = " << totalinches << "}\n{Feet inch form = " << feet << "'" << inches << "\"}\n";
  
}