/*
Name: Micah Hacker

Program: Pennies For Pay

Date: 11/1/22

Desc: This is a cool program to calculate how much a person could make if they started getting paid 1 cent and having it double each day they work.

Write a program that calculates how much a person earns in a month if the salary is one penny the first day, two pennies the second day, four pennies the third day, and so on with the daily pay doubling each day the employee works. The program should ask the user for the number of days the employee worked during the month, validate that it is between 1 and 31, and then display a table showing how much the salary was for each day worked, as well as the total pay earned for the month. The output should be displayed in dollars with two decimal points, not in pennies.
*/
#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;
int main() 
{
  //Set locale for currency
  cout.imbue(locale("en_US.utf8"));
  double totalpay = 0, pay = 0.01, converter;
  int daysWorked;
  double table[31];
  cout << "~~Welcome to the Pennies For Pay Program~~\n" << "Enter how many days you've worked: ";
  cin >> daysWorked;
  while(!(daysWorked >= 1 && daysWorked <= 31)){
  cout << "\nPlease enter a number between 1 and 31.\n";
  cin >> daysWorked;
  }
  
  for(int i = 0; i < daysWorked; i++){
    totalpay = totalpay + pay;
    table[i] = pay;
    pay = (pay * 2);
  }
  
  cout << "\n\n~~Table~~\n";
  for(int i = 0; i < daysWorked; i++){
    //converter = (table[i] * 100);
    cout << "|Day = " << i+1 << ", Pay = $" << table[i] << "|\n";
  }
  cout << "\n~~The total pay sum across " << daysWorked << " days worked is $" << totalpay;
  
}