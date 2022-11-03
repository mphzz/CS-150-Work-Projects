/*
Program: Celsius to Fahrenheit

Programmer: Micah Hacker

Description: This program takes celsius as an input and converts it to fahrenheit and prints it to the user.


Write a program that converts Celsius temperatures to Fahrenheit
temperatures. The formula is [ F = 9/5 C + 32] where F is the Fahrenheit
temperature and C is the Celsius temperature. The program should
prompt the user to input a Celsius temperature and should display the
corresponding Fahrenheit temperature.
*/
#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main() 
{
  //Declare needed vars
  int celsius, fahrenheit;
  cout << "~~~Celsius to Fahrenheit Converter~~~\n";
  //Ask user for degrees in celsius
  cout << "Enter degrees in celsius: ";
  cin >> celsius;
  //Calculate fahrenheit
  fahrenheit = (celsius * 9/5) + 32;
  //Print data to user
  cout << "\nCelsius: " << celsius << ", Fahrenheit: " << fahrenheit;
}