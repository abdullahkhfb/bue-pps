#include <iostream>
using namespace std;

// Recursive function to calculate sum of first n natural numbers
int sumNatural(int n)
{
    // Base case
    if (n == 0)
        return 0;
    // Recursive case
    return n + sumNatural(n - 1);
}

int main()
{
    int n;

    cout << "Enter a number N: ";
    cin >> n;

    cout << "Sum of first " << n << " natural numbers is: " << sumNatural(n) << endl;

    return 0;
}