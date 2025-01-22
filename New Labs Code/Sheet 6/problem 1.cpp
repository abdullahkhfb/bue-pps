#include <iostream>
using namespace std;

void convertCurrency(double pounds, double &dollars, double &euros)
{
    // Convert Egyptian pounds to dollars and euros using reference parameters
    dollars = pounds / 47.5; // 1 dollar = 47.5 pounds
    euros = pounds / 52.5;   // 1 euro = 52.5 pounds
}

int main()
{
    double egyptianPounds, dollars, euros;

    // Get input from user
    cout << "Enter amount in Egyptian Pounds: ";
    cin >> egyptianPounds;

    // Convert the amount using the function
    convertCurrency(egyptianPounds, dollars, euros);

    // Display results
    cout << egyptianPounds << " Egyptian Pounds is equal to:" << endl;
    cout << dollars << " Dollars" << endl;
    cout << euros << " Euros" << endl;

    return 0;
}