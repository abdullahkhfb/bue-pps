#include <iostream>
#include <string>
using namespace std;

// Function to check if a string is a palindrome (reads same forwards and backwards)
bool isPalindrome(string word)
{
    // Initialize two pointers - one at start, one at end
    int left = 0;
    int right = word.length() - 1;

    // Keep checking while pointers haven't met in middle
    while (left < right)
    {
        // If characters at left and right don't match, not a palindrome
        if (word[left] != word[right])
        {
            return false;
        }
        // Move pointers toward the middle
        left++;
        right--;
    }
    // If we made it here, all characters matched - it's a palindrome
    return true;
}

int main()
{
    string word;
    cout << "Enter a word in lowercase: ";
    cin >> word;

    if (isPalindrome(word))
    {
        cout << word << " is a palindrome" << endl;
    }
    else
    {
        cout << word << " is not a palindrome" << endl;
    }

    return 0;
}

/*
isPalindrome Function Explanation:

This function checks whether a word reads the same forwards and backwards (called a palindrome).
For example, words like "radar" or "level" are palindromes because they read the same in both directions.

The function takes a single input: a string parameter called "word" that contains the text we want to check.
It outputs a boolean value - true if the word is a palindrome, and false if it's not.

The way it works is clever and efficient. Instead of creating a reversed copy of the word, it uses two
pointers (left and right) that start at opposite ends of the word and move toward the middle. The left
pointer starts at the beginning (position 0), and the right pointer starts at the end (length - 1).

The function then uses a while loop to keep checking characters as long as the left pointer hasn't caught
up to the right pointer. During each loop iteration, it compares the characters at both pointer positions.
If they don't match (like 'h' vs 's'), it immediately returns false since the word can't be a palindrome.
If they do match, both pointers move one step closer to the middle (left moves forward, right moves backward).

If the loop completes without finding any mismatches, it means every character on the left side perfectly
matched its corresponding character on the right side, so the function returns true - confirming it's a palindrome.

For example, with the word "radar":
1. First check: 'r' vs 'r' (match)
2. Second check: 'a' vs 'a' (match)
3. Middle 'd' is reached, pointers meet
4. Returns true since all characters matched

This approach is particularly efficient because it only needs to check half the word's length and stops
as soon as it finds any mismatch.
*/