

#include <iostream>

using namespace std;

int main() 
{
  int blockLen, blockWidth, houseLen, houseWidth, blockArea, houseArea, mowingArea;
  double mowingTime, mowingHours;
  cout << "~~MowTime Program~~\nEnter input in meters.\nEnter the length of your house block: ";
  cin >> blockLen;
  cout << "Enter the width if your house block: ";
  cin >> blockWidth;
  cout << "\nEnter the length of your house: ";
  cin >> houseLen;
  cout << "Enter the width of your house: ";
  cin >> houseWidth;
  blockArea = blockLen * blockWidth;
  houseArea = houseLen * houseWidth;
  mowingArea = blockArea - houseArea;
  mowingTime = mowingArea / 2;
  mowingHours = mowingTime / 60;
  cout << "\nIt would take about " << mowingTime << " minutes to mow your lawn, or about " << mowingHours << " hours.";
  
}