/*
PROGRAM: Stadium Seating
PROGRAMMER: MICAH HACKER
DESC:
Take ticket data and calculate costs with it, print data to user.

There are three seating categories at a stadium. For a softball game, Class A seats cost $15, Class B seats cost $12, and Class C seats cost $9. Write a program that asks how many tickets for each class of seats were sold, then displays the amount of income generated from ticket sales. Format your dollar amount in a fixed-point notation with two decimal points and make sure the decimal point is always displayed.
*/
#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main() 
{
  //DECLARE ALL NEEDED VARS, INITIALIZE THOSE NEEDED
  int a = 15, b = 12, c = 9, soldA, soldB, soldC, soldTotal, totalA, totalB, totalC, total, moneyA, moneyB, moneyC, moneyTotal;
  //PRINT TICKET INFO
  cout << "~~~Tickets~~~\nClass A Seats = $15.00\nClass B Seats = $12.00\nClass C Seats = $9.00\n~~~~~~~~~~~~~\n";
  //ASK USER TO ENTER TICKET AMOUNTS
  cout << "\nEnter amount of A seats purchased: ";
  cin >> soldA;
  cout << "\nEnter amount of C seats purchased: ";
  cin >> soldB;
  cout << "\nEnter amount of C seats purchased: ";
  cin >> soldC;
  //ADD AMOUNT OF TICKETS
  soldTotal = soldA + soldB + soldC;
  //CALCULATE COST OF A TICKET
  totalA = soldA * a;
  moneyA = totalA * 100;
  //CALCULATE COST OF B TICKET
  totalB = soldB * b;
  moneyB = totalB * 100;
  //CALCULATE COST OF C TICKET
  totalC = soldC * c;
  moneyC = totalC * 100;
  //CALCULATE COST OF ALL TICKETS
  total = totalA + totalB + totalC;
  moneyTotal = total * 100;
  //LOCALE FOR CURRENCY
  cout.imbue(locale("en_US.utf8"));
  //PRINT ALL DATA
  cout << "\n\n~~~SALES STATS~~~\n# of A tickets sold: " << soldA << ", Earned: $" << put_money(moneyA) << "\n# of B tickets sold: " << soldB << ", Earned: $" << put_money(moneyB) << "\n# of C tickets sold: " << totalC << ", Earned: $" << put_money(moneyC) << "\n\nTOTAL TICKETS SOLD: " <<  soldTotal << ", EARNED: $" << put_money(moneyTotal) << "\n~~~~~~~~~~~~~~~~~";
}