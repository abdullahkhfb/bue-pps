#include <iostream>
#include <string>
using namespace std;

void count_punctuation(string text, int &commas, int &periods)
{
    commas = 0;
    periods = 0;

    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == ',')
        {
            commas++;
        }
        else if (text[i] == '.')
        {
            periods++;
        }
    }
}

int main()
{
    string input;
    int numCommas = 0, numPeriods = 0;

    cout << "Enter a string: ";
    getline(cin, input);

    count_punctuation(input, numCommas, numPeriods);

    cout << "Number of commas: " << numCommas << endl;
    cout << "Number of periods: " << numPeriods << endl;

    return 0;
}