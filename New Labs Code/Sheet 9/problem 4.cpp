#include <iostream>
using namespace std;

/*
Cinema Ticketing System with Exception Handling

This program implements age verification for movie tickets:
- Takes user age as input
- Uses try-catch block for exception handling
- Throws exception if age < 12
- Uses const char* for efficient string literal handling in exceptions
- Prints appropriate message based on age verification

Flow:
1. User inputs age
2. try block checks if age meets minimum requirement
3. If age < 12: throws exception with message
4. If age >= 12: allows movie entry
5. catch block handles the age restriction message
*/

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    try
    {
        if (age < 12)
        {
            throw "Violent movies are not suitable for that age";
        }
        cout << "You are allowed to enter the movie." << endl;
    }
    catch (const char *message) // you can use string instead of const char* if you want but this is more efficient
    {
        cout << message << endl;
    }

    return 0;
}