#include <iostream>  // Include the iostream library for input and output operations
using namespace std; // Use the standard namespace to avoid prefixing std:: before standard library names

int main()
{
    int age;                          // Variable to store the user's age
    const double ticketPrice = 200.0; // Constant variable for the original ticket price
    double finalPrice;                // Variable to store the final ticket price after applying any discount

    cout << "Enter your age: "; // Prompt the user to enter their age
    cin >> age;                 // Read the user's age from the input

    // Check if the user is eligible for a discount
    if (age <= 12 || age >= 65)
    {
        finalPrice = ticketPrice * 0.5; // Apply a 50% discount if the user is a child or a senior
    }
    else
    {
        finalPrice = ticketPrice; // No discount for users who are not children or seniors
    }

    // Output the final ticket price
    cout << "The ticket price is: " << finalPrice << " L.E." << endl;

    return 0; // Return 0 to indicate successful program execution
}