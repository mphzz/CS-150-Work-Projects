/*
Program: Box Office
Programmer: Micah Hacker
Description: A program to calculate cost of tickets to the movie, breaks down revenue data between the theatre and distributor.

A movie theater only keeps a percentage of the revenue earned from ticket sales. The remainder goes to the distributor. Write a program that calculates a theater’s gross and net box office profit for a night. The program should ask for the name of the movie, and how many adult and child tickets were sold. (The price of an adult ticket is $6.00 and a child’s ticket is $3.00.)
*/

#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main() 
{
  //DECLARE AND INITIALIZE NEEDED VARS
  int child = 3, adult = 6, cSold, aSold, cTotal, aTotal;
  double total, dRevenue, mRevenue, mTotal, mdRevenue, mmRevenue;
  char movie[100]={0};
  cout << "~~Welcome to the C++ Theatre~~\nEnter the name of the movie you're seeing: ";
  cin.getline(movie, 100);
  cout << "\nHow many adult tickets? ";
  cin >> aSold;
  cout << "\nHow many child tickets? ";
  cin >> cSold;
  cTotal = cSold * child;
  aTotal = aSold * adult;
  total = cTotal + aTotal;
  mRevenue = (total * 33)/100;
  dRevenue = total - mRevenue;
  cout.imbue(locale("en_US.utf8"));
  mmRevenue = mRevenue * 100;
  mdRevenue = dRevenue * 100;
  mTotal = total * 100;
  cout << "\nThat'll be $" << put_money(mTotal) << ". Enjoy watching " << movie << ", I've heard its very good!";
  cout << "\nAnd by the way at this theatre we get keep 33 percent of the revenue.\nFrom your sale we made $" << put_money(mmRevenue) << ", while our distributor made $" << put_money(mdRevenue);
  
  
  
 
}