/*
Name: Micah Hacker

Program: Membership Fee Increase

Date: 10/25/22

Desc: This is a program designed to show the user the membership price increase for a certain country club across six years.

A country club, which currently charges $2500 per year for membership, has announced it will increase its membership fee by 4% each year for the next six years. Write a program that uses a loop to display the projected rates for the next six years.
*/
#include <iostream>
#include <locale>
#include <iomanip>
using namespace std;
int main() 
{
  cout.imbue(locale("en_US.UTF-8"));
  const float incPer = 1.04;
  double cost = 2500, cents;
  cout << "\nThis will display the cost for the country club\nfor the next six years. \n\nThe current cost is $2500.00\n\n";
  for(int i = 0; i < 6; i++){
    cost = cost * incPer;
    cents = cost * 100;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << i + 1 << " year(s) later, membership now costs $" << put_money(cents) << endl;
  }
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  exit(0);
}