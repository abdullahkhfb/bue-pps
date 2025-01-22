#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize the 3x3 Sudoku puzzle
    int puzzle[3][3] = {
        {1, 0, 3},
        {3, 1, 0},
        {2, 3, 0}};

    // Loop through each row to find and insert the missing number
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        int zeroIndex = -1;

        // Calculate the sum of the row and find the index of the zero
        for (int j = 0; j < 3; j++)
        {
            if (puzzle[i][j] == 0)
            {
                zeroIndex = j;
            }
            else
            {
                sum += puzzle[i][j];
            }
        }

        // Determine the missing number based on the sum of the other two numbers
        int missingNumber = 0;
        if (sum == 5)
        {
            missingNumber = 1;
        }
        else if (sum == 4)
        {
            missingNumber = 2;
        }
        else if (sum == 3)
        {
            missingNumber = 3;
        }

        // Insert the missing number in the correct position
        // Check if zeroIndex is not -1 (indicating that a zero was found in the row)
        if (zeroIndex != -1)
        {
            // Insert the missing number at the position of the zero in the row
            puzzle[i][zeroIndex] = missingNumber;
        }
    }

    // Print the completed Sudoku puzzle
    cout << "Completed Sudoku puzzle:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << puzzle[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
Explanation of the condition:
if (zeroIndex != -1)
{
    puzzle[i][zeroIndex] = missingNumber;
}

1. Overall Purpose:
   - This `if` statement checks if the `zeroIndex` is not equal to -1, which indicates that a zero was found in the current row. If a zero was found, it inserts the missing number at the position of the zero in the row.

2. Breaking Down the Condition:
   - `zeroIndex != -1`:
     - This checks if the `zeroIndex` is not equal to -1.
     - `zeroIndex` is initially set to -1 and is updated to the column index of the zero if a zero is found in the row.
     - If `zeroIndex` is not -1, it means that a zero was found in the row.

3. Inserting the Missing Number:
   - If the condition `zeroIndex != -1` is true, the code inside the `if` block is executed.
   - `puzzle[i][zeroIndex] = missingNumber;`:
     - This inserts the `missingNumber` at the position of the zero in the row.
     - `puzzle[i][zeroIndex]` accesses the element in the `puzzle` array at row `i` and column `zeroIndex`.
     - The value of `missingNumber` is assigned to this position, replacing the zero with the missing number.

4. Example:
   - Let's say the `puzzle` array and `zeroIndex` are as follows:
     - `puzzle[0] = {1, 0, 3}`
     - `zeroIndex = 1`
     - `missingNumber = 2`
   - The condition `zeroIndex != -1` is true because `zeroIndex` is 1.
   - The code `puzzle[0][1] = 2;` is executed, resulting in the updated row `puzzle[0] = {1, 2, 3}`.
*/