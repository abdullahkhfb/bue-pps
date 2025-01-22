#include <iostream>
using namespace std;

// Define enum for days of the week starting with Sunday as 1
enum DaysOfWeek
{
    SUNDAY = 1,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main()
{
    int dayNumber;

    // Get input from user
    cout << "Enter a day number (1-7): ";
    cin >> dayNumber;

    // Convert input to enum and print corresponding day
    switch (dayNumber)
    {
    case SUNDAY:
        cout << "It's Sunday!" << endl;
        break;
    case MONDAY:
        cout << "It's Monday!" << endl;
        break;
    case TUESDAY:
        cout << "It's Tuesday!" << endl;
        break;
    case WEDNESDAY:
        cout << "It's Wednesday!" << endl;
        break;
    case THURSDAY:
        cout << "It's Thursday!" << endl;
        break;
    case FRIDAY:
        cout << "It's Friday!" << endl;
        break;
    case SATURDAY:
        cout << "It's Saturday!" << endl;
        break;
    default:
        cout << "Invalid day number! Please enter a number between 1 and 7." << endl;
    }

    return 0;
}