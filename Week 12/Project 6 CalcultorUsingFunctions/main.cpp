#include <iostream>
using namespace std;
#include "Calc.h"

int main()
{
	float x, y;
	int choice;
	do
	{
		showChoices();
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter two numbers: ";
			cin >> x >> y;
			cout << "Sum " << add(x,y) <<endl;
			break;
		case 2:
			cout << "Enter two numbers: ";
			cin >> x >> y;
			cout << "Difference " << subtract(x,y) <<endl;
			break;
		case 3:
			cout << "Enter two numbers: ";
			cin >> x >> y;
			cout << "Product " << multiply(x,y) <<endl;
			break;
		case 4:
			cout << "Enter two numbers: ";
			cin >> x >> y;
			cout << "Quotient " << divide(x,y) <<endl;
			break;
		case 5:
			break;
		default:
			cout << "Invalid input" << endl;
		}
	}while (choice != 5);

	return 0;
}

