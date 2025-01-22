#include <iostream>
using namespace std;

int main()
{
    char items[5];
    int totalBill = 0;

    // Prices of the items
    const int priceYogurt = 5;
    const int priceCoffee = 200;
    const int priceTea = 30;
    const int priceMilk = 45;

    // Prompt the user to enter 5 items
    cout << "Enter 5 items (Y/y for Yogurt, C/c for Coffee, T/t for Tea, M/m for Milk): " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> items[i];
    }

    // Calculate the total bill
    for (int i = 0; i < 5; i++)
    {
        switch (items[i])
        {
        case 'Y':
        case 'y':
            totalBill += priceYogurt;
            break;
        case 'C':
        case 'c':
            totalBill += priceCoffee;
            break;
        case 'T':
        case 't':
            totalBill += priceTea;
            break;
        case 'M':
        case 'm':
            totalBill += priceMilk;
            break;
        default:
            cout << "Invalid item entered: " << items[i] << endl;
            break;
        }
    }

    // Display the total bill
    cout << "Total Bill = " << totalBill << endl;

    return 0;
}