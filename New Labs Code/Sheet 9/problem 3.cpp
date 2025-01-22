#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream inventoryFile;
    inventoryFile.open("Files/inventory.txt");
    ofstream billFile;
    billFile.open("Files/Bill.txt");

    if (!inventoryFile.is_open())
    {
        cout << "Error opening inventory file!" << endl;
        return 1;
    }

    string product;
    double price;
    int quantity;
    double totalBill = 0.0;

    cout << "For each product, select how many items:" << endl;

    while (inventoryFile >> product >> price)
    {
        cout << product << endl;
        cin >> quantity;
        double itemTotal = price * quantity;
        totalBill += itemTotal;
        billFile << product << " " << quantity << " " << itemTotal << endl;
    }

    billFile << "Total payment is " << totalBill << endl;

    inventoryFile.close();
    billFile.close();

    cout << "The total payment is " << totalBill << endl;

    return 0;
}