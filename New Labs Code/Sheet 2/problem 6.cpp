#include <iostream>
using namespace std;

int main()
{
    // Initialize the array with match results
    int matchResults[] = {1, 0, -1, 1, -1};
    int n = sizeof(matchResults) / sizeof(matchResults[0]); // Calculate the number of elements in the array

    // Loop through the array to output the match results
    for (int i = 0; i < n; i++)
    {
        cout << "Match " << (i + 1) << " ";
        if (matchResults[i] == 1)
        {
            cout << "El Ahly won." << endl;
        }
        else if (matchResults[i] == 0)
        {
            cout << "is a tie." << endl;
        }
        else if (matchResults[i] == -1)
        {
            cout << "El Ahly lost." << endl;
        }
    }

    return 0;
}