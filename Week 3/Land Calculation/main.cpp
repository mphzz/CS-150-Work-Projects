/*

Program name: Land Calculation

Programmer name: Micah Hacker

Description:
This program takes in acres and converts it to both square feet and square meters;

Date: 9/13/22

*/
#include <iostream>

using namespace std;

int main() 
{
  //ACRE = 43560 sqft
  //Square meter = 10.7936 sqft
  //Declare needed variables
  double acres, squaremeter, squarefeet;
  //Ask user to enter acres
  cout << "Enter how many acres you want to convert square feet and square meters: ";
  //Get acres from user
  cin >> acres;
  //Calculate square feet
  squarefeet = acres * 43560;
  //Calculate square meters
  squaremeter = squarefeet / 10.7639;
  //Print info to user's screen
  cout << "\n~~Calculations~~\n[Acres = " << acres << "]\n[Square feet = " << squarefeet << "]\n[Square meters = " << squaremeter << "]";
}