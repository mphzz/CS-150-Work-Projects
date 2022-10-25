/*
Write a program that calculates the balance of a savings account at the end of a three month period. It should ask the user for the starting balance and the annual interest rate. A loop should then iterate once for every month in the period, performing the following steps:

A) Ask the user for the total amount deposited into the account during that month and add it to the balance. Do not accept negative numbers.

B) Ask the user for the total amount withdrawn from the account during that
month and subtract it from the balance. Do not accept negative numbers or
numbers greater than the balance after the deposits for the month have been
added in.

C) Calculate the interest for that month. The monthly interest rate is the annual
interest rate divided by 12. Multiply the monthly interest rate by the average of
that month’s starting and ending balance to get the interest amount for the
month. This amount should be added to the balance.

After the last iteration, the program should display a report that includes the following information:

• starting balance at the beginning of the three-month period
• total deposits made during the three months
• total withdrawals made during the three months
• total interest posted to the account during the three months
• final balance

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double stBal,            // Starting Balance
		   deposit,				     // Monthly deposits
		   withdrawn,				   // Monthy withdrawls
		   totalDeposits  = 0, // Total deposits
		   totalWd  = 0,		   // Total withdrawls
		   mthStr = 0, 		   // Monthly starting balance
		   mthInt,					   // Monthly interest
		   totalInt   = 0,		   // Total Interest
		   mthEnding,					   // Monthly ending balance
		   annInt;					   // Annual Interest
// Ask user to enter the starting balance and the annual interest rate
	cout << "This program calculates the balance of a\n"
	     << "savings account at the end of a three month period.\n\n";
    cout << "What is the starting balance of the account? ";
    cin  >> stBal;
    cout << endl;

	cout << "Enter the annual interest as a decimal: ";
	cin  >> annInt;
	cout << endl;

	mthStr += stBal;

	// Iterate once a month 
	for (int mth = 1; mth <= 3; mth++)
	{

		do
		{	// Ask user to input deposits for the month
			// and validate only positive integers
			cout << "What is the total amount deposited\ninto "
				 << "the account during month " << mth << "? ";
			cin  >> deposit;

			if (deposit < 0)
			{	
				cout << "Invalid integer.\n"
					 << "deposits must be a positive integer.\n";
			}

		} while (deposit < 0); 

		cout << endl;
		totalDeposits += deposit;

		do
		{	// Ask user to input monthly withdrawal and validate only positive
			// integers and Total deposits is greater than withdrawals
			cout << "What is the total amount withdrawn\nfrom "
				 << "the account during month " << mth << "? ";
			cin  >> withdrawn;

			if (withdrawn < 0 || withdrawn > totalDeposits)
			{	
				cout << "Invalid integer.\n";

				if (withdrawn < 0)
				{
					cout << "Withdrawals must be a positive integer.\n";
				}
				else
				{
					cout << "The Balacne must be greater than withdrawals.\n";
				}
			}

		} while (withdrawn < 0 || withdrawn > totalDeposits);

		cout << endl;

		// Accumulate total withdrawn
		totalWd += withdrawn;

		// Calculate monthly ending balance
		mthEnding = mthStr + deposit - withdrawn;

		// Calculate monthly interest
		mthInt = ((mthStr + mthEnding) / 2.0) * (annInt / 12.0);

		// Accumulate total Interest
	 	totalInt += mthInt;

	 	mthStr = mthEnding + mthInt;
	}

	// Display report
	cout << "\n Quarterly Savings Account Report\n"
		 << "------------------------------------\n";
	cout << fixed << showpoint << setprecision(2);
	cout << "Starting balance  : $ " << setw(9) << stBal << endl;
   	cout << "Total deposits    : $ " << setw(9) << totalDeposits << endl;
   	cout << "Total withdrawals : $ " << setw(9) << totalWd << endl;
	cout << "Total interest    : $ " << setw(9) << totalInt << endl;
	cout << "Final balance     : $ " << setw(9) << mthStr << endl;
	return 0;
}