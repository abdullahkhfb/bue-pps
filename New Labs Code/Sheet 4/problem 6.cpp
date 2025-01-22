#include <iostream>
using namespace std;

bool isVowel(char letter)
{
    // Convert letter to lowercase for easier comparison
    letter = tolower(letter);

    // Check if the letter is a vowel
    return (letter == 'a' || letter == 'e' || letter == 'i' ||
            letter == 'o' || letter == 'u');
}

int main()
{
    char letter;

    cout << "Enter a letter: ";
    cin >> letter;

    if (isVowel(letter))
    {
        cout << letter << " is a vowel" << endl;
    }
    else
    {
        cout << letter << " is a consonant" << endl;
    }

    return 0;
}