/*
Write a program that asks the user to enter today’s sales rounded to the nearest $100 for each of three stores. The program should then display a bar graph comparing each store’s sales. Create each bar in the graph by displaying a row of asterisks. Each asterisk should represent $100 of sales.

Here is an example of the program’s output. User input is shown in bold.

Enter today’s sales for store 1: 1000[Enter]
Enter today’s sales for store 2: 1200[Enter]
Enter today’s sales for store 3: 900[Enter]

DAILY SALES 
(each * = $100)

Store 1: **********
Store 2: ************
Store 3: *********

*/
#include <iostream>
using namespace std;

int main()
{
  //Declare stores;
	int store1, store2, store3;


	// Ask user to enter days sales rounded to the nearest $100
	cout << "Lets create today's Sales Bar Chart, please enter\n" << "the sales for each store.\n(Rounded to the nearest $100)\n\n";
  //Get sales
	do
	{
		cout << "Enter today’s sales for store 1: ";
		cin  >> store1;

		if (store1 < 0)
			cout << "Error! Sales figures must be greater than $0.00.\n";

	}while (store1 < 0);

	do
	{
		cout << "Enter today’s sales for store 2: ";
		cin  >> store2;

		if (store2 < 0)
			cout << "Error! Sales figures must be greater than $0.00.\n";

	}while (store2 < 0);

	do
	{
		cout << "Enter today’s sales for store 3: ";
		cin  >> store3;

		if (store3 < 0)
			cout << "Error! Sales figures must be greater than $0.00.\n";

	}while (store3 < 0);

	store1 /= 100;
	store2 /= 100;
	store3 /= 100;

	cout << "\n    DAILY SALES\n  (each * = $100)\n"
		 << "Store 1: ";
//Create bar graph
	for (int i = 0; i < store1; ++i)
	{
		cout << "* ";
	}
	cout << "\nStore 2: ";

	for (int i = 0; i < store2; ++i)
	{
		cout << "* ";
	}
	cout << "\nStore 3: ";

	for (int i = 0; i < store3; ++i)
	{
		cout << "* ";
	}
	cout << endl;

	return 0;
}