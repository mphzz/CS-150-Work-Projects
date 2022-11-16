/*
Name: Micah Hacker

Program: Greatest and Least

Date: 11/1/22

Desc: This program will take in many numbers from the user and find the largest and smallest one entered.

Write a program with a loop that lets the user enter a series of integers, followed by -99 to signal the end of the series. After all the numbers have been entered, the program should display the largest and smallest numbers entered.
*/
#include <iostream>
using namespace std;
int main()
{
	int num,
		large,
		small;

	cout << "Enter a series of numbers and the program will\n"
		 << "display the largest and smallest numbers entered\n"
		 << "Enter a number\n";
	cin	 >> num;

	large = small = num;

	while (num != -99)
	{			
		cout << "Enter a number(-99 will stop asking)\n";
		cin  >> num;
		
		if (num > large)
			large = num;

		if (num < small)
			small = num;

	}
	cout << "The largest number entered is " << large << "." << endl;
	cout << "The smallest number entered is " << small << "." << endl;
	return 0;
}