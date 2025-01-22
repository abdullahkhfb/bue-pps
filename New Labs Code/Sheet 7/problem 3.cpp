#include <iostream>
using namespace std;

// Define the complex number structure
struct Complex
{
    float real;
    float imaginary;
};

// Function to add two complex numbers
Complex addComplex(Complex c1, Complex c2)
{
    Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

// Function to subtract two complex numbers
Complex subtractComplex(Complex c1, Complex c2)
{
    Complex result;
    result.real = c1.real - c2.real;
    result.imaginary = c1.imaginary - c2.imaginary;
    return result;
}

// Function to multiply two complex numbers
Complex multiplyComplex(Complex c1, Complex c2)
{
    Complex result;
    result.real = (c1.real * c2.real) - (c1.imaginary * c2.imaginary);
    result.imaginary = (c1.real * c2.imaginary) + (c1.imaginary * c2.real);
    return result;
}

// Function to display a complex number
void displayComplex(Complex c)
{
    cout << c.real << " + " << c.imaginary << "i" << endl;
}

int main()
{
    Complex num1, num2;

    // Input first complex number
    cout << "Enter first complex number:" << endl;
    cout << "Real part: ";
    cin >> num1.real;
    cout << "Imaginary part: ";
    cin >> num1.imaginary;

    // Input second complex number
    cout << "\nEnter second complex number:" << endl;
    cout << "Real part: ";
    cin >> num2.real;
    cout << "Imaginary part: ";
    cin >> num2.imaginary;

    // Perform operations and display results
    cout << "\nResults:" << endl;
    cout << "Addition: ";
    displayComplex(addComplex(num1, num2));

    cout << "Subtraction: ";
    displayComplex(subtractComplex(num1, num2));

    cout << "Multiplication: ";
    displayComplex(multiplyComplex(num1, num2));

    return 0;
}