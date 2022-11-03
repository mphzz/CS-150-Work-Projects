/*
Program: GeometryCalculator

Programmer: Micah H.

Desc: This is a tool a user can use to find the area of rectanlge, triangle, or circle depending at what the user selects.
*/
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
  int rectangleArea, radius, area, width, length, height;
  float circleArea, triangleArea;
  const double PI = 3.14;

  while (1 == 1) {
    cout << "1 to get the radius of a circle" << endl;
    cout << "2 to get the width of a rectangle" << endl;
    cout << "3 to get the length of a triangle" << endl;
    cout << "4 to end" << endl;
    cout << "Choose Your option : ";
    cin >> area;
    cout << endl;

    switch (area) {
    case 1:
      cout << "Enter the radius of a circle:\n";
      cin >> radius;
      circleArea = PI * radius * radius;
      cout << "The area of the circle is " << circleArea << "\n\n\n" << endl;
      break;

    case 2:
      cout << "Enter the width of a rectangle" << endl;
      cin >> width;
      cout << "Enter the length of the rectangle" << endl;
      cin >> length;
      rectangleArea = width * length;
      cout << "Rectangular Area =" << triangleArea << "\n\n\n" << endl;
      break;

    case 3:
      cout << "Enter the length of a triangle" << endl;
      cin >> length;
      cout << "Enter the height of a triangle" << endl;
      cin >> height;
      triangleArea = length * height / 2;
      cout << "Triangle Area=" << triangleArea << "\n\n\n" << endl;

      break;

    case 4:
      cout << "Program ending" << endl;
      return 0;
    }
  }

}