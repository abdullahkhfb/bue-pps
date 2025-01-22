
#include <iostream>
using namespace std;

void printSequence(int start, int n, int current)
{
    if (current > n)
    {
        return;
    }

    cout << start << " ";
    printSequence(start + 5, n, current + 1);
    /*
    printSequence(start + 5, n, current + 1) Explanation:

    This line of code is a recursive function call that helps print a sequence of numbers with a fixed increment. Let's break down what it does:

    The function takes three inputs: 'start + 5' which is the next number in the sequence, 'n' which is the total number of terms we want to print, and 'current + 1' which keeps track of how many numbers we've printed so far.

    The purpose of this code is to generate and print a sequence where each number is 5 more than the previous number. For example, if we start with 5, the sequence would be 5, 10, 15, 20, and so on.

    Looking at how it works: Each time this function is called, it adds 5 to the previous number (start + 5) and increases our position counter (current + 1). The function will keep calling itself with these new values until we've printed all the numbers we wanted (controlled by the 'n' parameter).

    The logic flow is straightforward but clever: it uses recursion (a function calling itself) to keep generating the next number in the sequence. Each recursive call moves us one step further in the sequence by adding 5 to the previous number. The 'current + 1' parameter helps us keep track of our position and eventually stop when we've printed enough numbers.

    From the full context, we can see this creates a sequence starting at 5 and prints 10 numbers, each increasing by 5 (so it would print: 5, 10, 15, 20, 25, 30, 35, 40, 45, 50).
    */
}

int main()
{
    int n = 10; // Number of terms to print
    printSequence(5, n, 1);
    return 0;
}