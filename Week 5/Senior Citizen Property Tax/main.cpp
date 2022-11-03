

#include <iostream>

using namespace std;

int main() 
{
const double ASSESS_FACTOR = .60,// Factor to figure assessment value
SENIOR_EXEMPTION = 5000.00;// Senior citizen homeowner exemption
const int NUM_QTRS = 4;// Number of annual (quarterly) payments
double actualValue,// Actual value of property
assessedValue,// Assessed value of property
taxRate,// County tax amount per $100
propertyTax,// Amount of tax on property
quarterlyPmt,// Amount due per payment
payTaxOn;//Amount they pay tax on
// Get user input actual property value: $ and tax per $100 .....
cout << "Hello and welcome to the senior citizen property tax tool!\n";
cout << "Please enter the home's value:";
cin >> actualValue;
// Perform computations
assessedValue = actualValue * ASSESS_FACTOR;
cout << "Your home's assessed value is $" << assessedValue;
payTaxOn = assessedValue - SENIOR_EXEMPTION;
cout << "\nBut being a senior citizen gives you a $5000 tax discount, bringing the amount you'll pay tax on to $" << payTaxOn;
cout << "\nEnter your current tax rate: ";
cin >> taxRate;
propertyTax = (payTaxOn / 100) * taxRate;
cout << "\nProperty tax: $" << propertyTax;
cout << "\nAs a senior citizen you can split your payments into 4 chunks for the year.";
quarterlyPmt = propertyTax / NUM_QTRS;
cout << "The quarterly payment would be $" << quarterlyPmt;




}