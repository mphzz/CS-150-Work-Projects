#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    //Declare Constant
    const double PRICE = 99.0;
    //Declare Variables
    int unitSold,
        noDiscountAmt;
    //Prompt the user for num of units sold
    cout << "\nEnter number of units sold: ";
    cin >> unitSold;

    //Calculate the amount before the discount
    noDiscountAmt = unitSold * PRICE;
    cout << setprecision(2) << fixed;
    // Compute total cost of the purchase.
    // Decision statement to determine sales discounts
    if (unitSold >= 0 && unitSold <= 9)
    {
        cout << "Total cost for " << unitSold 
             << " units = $"
             << noDiscountAmt << endl;
    }
    else if (unitSold >= 10 && unitSold <= 19)
    {
        cout << "Total cost for " << unitSold << " units = $" << (noDiscountAmt -      
                (noDiscountAmt * .20)) // 20%
          << endl;
    }
    else if (unitSold >= 20 && unitSold <= 49)
    {
        cout << "Total cost for " << unitSold << " units = $" << (noDiscountAmt - 
                (noDiscountAmt * .30)) // 30%
             << endl;
    }
    else if (unitSold >= 50 && unitSold <= 99)
    {
        cout << "Total cost for " << unitSold << " units = $" << (noDiscountAmt - 
                (noDiscountAmt * .40)) // 40%
             << endl;
    }
    else if (unitSold >= 100)
    {
        cout << "Total cost for " << unitSold << " units = $" << (noDiscountAmt - 
                (noDiscountAmt * .50)) // 50%
             << endl;
    }
    //If units sold is less than 0:
    else
    {
        cout << "Try again, please pick a number larger than 0." << endl;
    }
    //End program
    return 0;
}