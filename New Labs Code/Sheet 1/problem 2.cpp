#include <iostream>
using namespace std;

int main()
{
    int tshirtNumber;

    // Prompt the user to enter a T-shirt number
    cout << "Enter the T-shirt number: ";
    cin >> tshirtNumber;

    // Determine the player's position based on the T-shirt number
    if (tshirtNumber >= 1 && tshirtNumber <= 19)
    {
        cout << "Quarter Back" << endl;
    }
    else if ((tshirtNumber >= 40 && tshirtNumber <= 59) || (tshirtNumber >= 90 && tshirtNumber <= 99))
    {
        cout << "Line Backer" << endl;
    }
    else if ((tshirtNumber >= 30 && tshirtNumber <= 39) || (tshirtNumber >= 80 && tshirtNumber <= 89))
    {
        cout << "Tight End" << endl;
    }
    else if ((tshirtNumber >= 20 && tshirtNumber <= 29) || (tshirtNumber >= 60 && tshirtNumber <= 79))
    {
        cout << "Defensive Lineman" << endl;
    }
    else
    {
        cout << "Invalid T-shirt number" << endl;
    }

    return 0;
}