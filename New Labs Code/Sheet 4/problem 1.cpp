#include <iostream>
using namespace std;

// Function to convert Egyptian pounds to dollars
double convertToUSD(double egyptianPounds)
{
    const double EXCHANGE_RATE = 45.4;
    return egyptianPounds / EXCHANGE_RATE;
}

int main()
{
    double egyptianPounds;

    cout << "Enter amount in Egyptian Pounds: ";
    cin >> egyptianPounds;

    double dollars = convertToUSD(egyptianPounds);

    cout << egyptianPounds << " EGP = " << dollars << " USD" << endl;

    return 0;
}