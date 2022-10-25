/*
Program: Hotel Suites Occupancy

Programmer: Micah H

Date: 10/18/22

Desc:
This is a tool that a user can use to calculate the percent of how occupied a hotel(with 6 floors, 20 rooms per floor) is.

Instruction:
Write a program that calculates the occupancy rate of the 120 suites (20 per floor) located on the top 6 floors of a 15-story luxury hotel. These are floors 10–12 and 14–16 because, like many hotels, there is no 13th floor. Solve the problem by using a single loop that loops once for each floor between 10 and 16 and, on each iteration, asks the user to input the number of suites occupied on that floor. Use a nested loop, loop to validate that the value entered is between 0 and 20. After all the iterations, the program should display how many suites the hotel has, how many of them are occupied, and what percentage of them are occupied.
*/
#include <iostream>
using namespace std;

int main()
{
	const int SPACE = 120; // Total occupancy of hotel

	int  floor,		 // Hotel floor
		   totalS = 0,	 // Accumulator initialized to 0
		   suitesPF;	 // Suites per floor
	double pctOc;	 // Percentage of suites occupied

		// Single loop that loop once for each floor between 10 and 16
    cout << "~Welcome to the Hotel Suites Occupancy Program!~\n\n";
		for (floor = 10; floor <= 16; floor++)
		{
			// There is no 13th floor
			if (floor == 13)
			continue; 
      
			do
			{	// Ask user to input the number of suites occupied on each floor
				cout << "How many suites are occupied on the " << floor << "th floor? ";
				cin  >> suitesPF;

				if(suitesPF < 0 || suitesPF > 20)
				{  // Tell user that  number of suites occupied cannot be
				   // less than 0 or more than 20.
					cout << "\nError! Invalid suite amount.\n"
						 << "Number of suites must be greater than 0"
						 << " and less than 20.\n\n";
				}
				// Input Validation for number of suites
			} while (suitesPF < 0 || suitesPF > 20);

			totalS += suitesPF; 	// Add total
		}

		// Calculate the percent
		pctOc = (static_cast<double>(totalS) / SPACE) * 100;

		// Show how many suites the hotel has, how many of them are occupied, and what percentage of them are occupied
		cout << "\nTotal # of suites in the hotel: " << SPACE << endl
			 << "\nTotal # of suites occupied: " << totalS << endl
			 << "\nPercentage of suites occupied: " << pctOc << "\%" << endl <<endl;

		return 0;
}