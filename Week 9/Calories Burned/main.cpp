/*
Name: Micah Hacker

Program: Calories Burned

Date: 10/25/22

Desc: This is a tool designed to allow a user to enter the number of minutes they spent on the treadmill and it will rougly calculate how many calories the user has burned.

Running on a particular treadmill you burn 3.9 calories per minute. Write a program that uses a loop to display the number of calories burned after 10, 15, 20, 25, and 30 minutes.
*/
#include <iostream>
using namespace std;
int main() {
  const double minBurn = 3.9;
  double mins, calBurn;
  cout << "~~Treadmill Calorie Calculator~~" << "\nHello and welcome to the treadmill calorie calculator. \nPlease enter the amount of minutes spent on the treadmill to calculate calories burned: ";
  cin >> mins;
  cout << "\n\nCalculating...\n\n" << endl;
  calBurn = minBurn * mins;
  cout << "Across " << mins << " minutes you burned rougly " << calBurn << " calories! Great work!" << endl;
  exit(0);
}