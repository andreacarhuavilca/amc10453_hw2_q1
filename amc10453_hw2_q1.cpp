// amc10453_hw2_q1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float num_of_quarters, num_of_dimes, num_of_nickels, _num_of_pennies, dollars, total_dollars, total_cents;
 
    

    cout << "Please enter number of coins" << endl;
    cout << "# of quarters "; cin >> num_of_quarters;
    cout << "# of dimes " ; cin >> num_of_dimes;
    cout << "# of nickels " ; cin >> num_of_nickels;
    cout << "# of pennies " ; cin >> _num_of_pennies;
    
    
    total_dollars = (num_of_quarters * 0.25) + (num_of_dimes * 0.10) + (num_of_nickels * 0.05) + (_num_of_pennies * 0.01);

    dollars = static_cast<int>(total_dollars); //casting to convert float into int

    total_cents = static_cast<int>((total_dollars - dollars) * 100); //casting to convert float into int

    cout << "The total amount is " << dollars << " dollar and " << total_cents <<  " cents." << endl;

    return 0;
}

