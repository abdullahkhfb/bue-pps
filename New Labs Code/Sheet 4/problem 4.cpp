#include <iostream>
using namespace std;

void calculateAgeDays(int years)
{
    int days = years * 365;
    cout << "Your age in days is: " << days << " days" << endl;
}

int main()
{
    int age;
    cout << "Enter your age in years: ";
    cin >> age;

    calculateAgeDays(age);

    return 0;
}