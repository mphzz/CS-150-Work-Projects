/*
Name: Micah H

Program: Complex IF's

Desc: This program takes in two numbers and compares them and prints different statements based on the comparisons. It tests firstly on if one number is equal or larger than the other, if true then it proceeds to check if when divided they are even, and if it passes that test it lastly compares if the two numbers are the same. If it fails the first test the program prints that the second number is larger than the first.
*/
#include <iostream>
using namespace std;
int main()
{
  int bigNumber, littleNumber;
  cout << "Enter a number: " << endl;
  cin >> bigNumber;
  cout << "Enter another number: " << endl;
  cin >> littleNumber;
  if(bigNumber >= littleNumber){
    if(bigNumber % littleNumber == 0){
      if(bigNumber == littleNumber){
        cout << "You entered the same number.";
        exit(0);
      }
      cout << "The first number you entered is evenly divisible by the second.";
      exit(0);
    }
    cout << "You entered a first number larger than the second.";
    exit(0);
  }
  else{
    cout << "You entered a second number larger than the first.";
  }
}