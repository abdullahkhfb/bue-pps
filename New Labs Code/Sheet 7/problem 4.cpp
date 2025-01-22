#include <iostream>
#include <string>
using namespace std;

struct Customer
{
    string name;
    int accountNumber;
    double balance;
};

void withdraw(Customer &customer, double amount)
{
    if (amount <= customer.balance)
    {
        customer.balance -= amount;
        cout << "Withdrawal successful. New balance: " << customer.balance << endl;
    }
    else
    {
        cout << "Insufficient funds!" << endl;
    }
}

void deposit(Customer &customer, double amount)
{
    customer.balance += amount;
    cout << "Deposit successful. New balance: " << customer.balance << endl;
}

int main()
{
    Customer customer;
    int choice;
    double amount;

    // Initialize customer data
    cout << "Enter customer name: ";
    getline(cin, customer.name);
    cout << "Enter account number: ";
    cin >> customer.accountNumber;
    cout << "Enter initial balance: ";
    cin >> customer.balance;

    do
    {
        cout << "\nBanking Menu" << endl;
        cout << "1. Withdraw" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            withdraw(customer, amount);
            break;
        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            deposit(customer, amount);
            break;
        case 3:
            cout << "Thank you for using our banking system!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}