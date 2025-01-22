#include <iostream>
using namespace std;

int main()
{
    // Initialize array with 4 elements
    int arr[4] = {10, 20, 30, 40};

    // Loop trying to access up to 5th element
    for (int i = 0; i < 5; i++)
    {
        try
        {
            if (i >= 4)
            {
                throw -1;
            }
            cout << "Element at index " << i << ": " << arr[i] << endl;
        }
        catch (int error)
        {
            cout << "Array out of boundaries" << endl;
        }
    }

    cout << "Program continues normally..." << endl;
    return 0;
}