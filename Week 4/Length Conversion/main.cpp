/*
Program: Length Conversion

Programmer: Micah Hacker

Description: This program is a tool to convert feet/inches to centimeters. It is simple and easy to use for users.
*/
#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main() 
{
  //Declare and initialize needed variables
  int feet, inches, hInches;
  double centimeters;
  double INCH_CONVERT = 2.54;
  int FEET_CONVERT = 12;
  cout << "~~Length Conversion Tool~~\n";
  //Take feet and inches in for conversion
  cout << "With this tool you can convert a legnth in ft/in scale to centimeters.\nEnter amount of feet followed by inches.\nFeet: ";
  cin >> feet;
  cout << "\nInches: ";
  cin >> inches;
  //store original value of inches
  hInches = inches;
  //convert feet to inches and add to inches
  inches = (feet * FEET_CONVERT) + inches;
  //convert total of inches to centimeters
  centimeters = INCH_CONVERT * inches;
  //Print out data about feet/inches and centimeters
  cout << "\nFeet/Inches: " << feet << "'" << hInches << "\", Centimeters: " << centimeters;
  
  
 
}