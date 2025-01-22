#include <iostream>
using namespace std;

int main()
{
    // Initialize the array with the encrypted word
    char encryptedWord[] = {'T', 'F', 'K', 'K', 'B', 'O'};
    int n = sizeof(encryptedWord) / sizeof(encryptedWord[0]); // Calculate the number of elements in the array

    // Loop through each character in the encrypted word to decrypt it
    for (int i = 0; i < n; i++)
    {
        // Check if the character is an uppercase letter
        if (encryptedWord[i] >= 'A' && encryptedWord[i] <= 'Z')
        {
            /*
             * This line performs character decryption using a shift cipher algorithm.
             * It takes a single encrypted uppercase letter and shifts it forward 3 positions
             * in the alphabet to reveal the original letter.
             *
             * The process works in these steps:
             * 1. encryptedWord[i] - 'A' converts letter to number (0-25, where A=0, B=1, etc.)
             * 2. Adding 3 shifts the number forward by 3 positions
             * 3. % 26 handles wrapping around the alphabet (X->A, Y->B, etc.)
             * 4. + 'A' converts the number back to a letter
             *
             * Example with 'B':
             * 'B' - 'A' = 1
             * 1 + 3 = 4
             * 4 % 26 = 4 (no wrap needed)
             * 4 + 'A' = 'E'
             */
            encryptedWord[i] = (encryptedWord[i] - 'A' + 3) % 26 + 'A';
        }
    }

    // Print the decrypted message
    cout << "Decrypted message: ";
    for (int i = 0; i < n; i++)
    {
        cout << encryptedWord[i];
    }
    cout << endl;

    return 0;
}