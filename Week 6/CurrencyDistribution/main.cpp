/*

Programmer name: Micah Hacker

Program: CurrencyDistribution

Date: 10/4/22

Desc:
A tool used to break a dollar amount into different currency note amounts. Prints data to user.

*/
#include <iostream>

using namespace std;

int main() 
{
  //Declare variables
  int ogAmt, remaining, fivehun, hun, fifties, twentys, tens, fives, ones;
  //Ask user for dollar amount
  cout << "Enter the amount of dollars: ";
  //Get amount from user
  cin >> ogAmt;
  //Calculate amounts:
  //500
  fivehun = ogAmt / 500;
  remaining = ogAmt % 500;
  //100
  hun = remaining / 100;
  remaining = remaining % 100;
  //50
  fifties = remaining / 50;
  remaining = remaining % 50;
  //20
  twentys = remaining / 20;
  remaining = remaining % 20;
  //10
  tens = remaining / 10;
  remaining = remaining % 10;
  //5
  fives = remaining / 5;
  remaining = remaining % 5;
  //1
  ones = remaining / 1;
  //Print to user
  cout << "\n~Amounts of each currency note~\n500(s): " << fivehun << "\n100(s): " << hun << "\n50(s): " << fifties << "\n20(s): " << twentys << "\n10(s): " << tens << "\n5(s): " << fives << "\n1(s): " << ones << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
}