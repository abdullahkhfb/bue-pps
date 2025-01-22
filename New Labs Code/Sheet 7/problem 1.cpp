#include <iostream>
using namespace std;

// Define a structure to represent a rectangle
struct Rectangle
{
    double length;
    double width;
    double perimeter;
    double area;
};

// Function to calculate the perimeter of the rectangle
double calculatePerimeter(double length, double width)
{
    return 2 * (length + width);
}

// Function to calculate the area of the rectangle
double calculateArea(double length, double width)
{
    return length * width;
}

int main()
{
    Rectangle rect;

    // Get user input for length and width
    cout << "Enter the length of the rectangle: ";
    cin >> rect.length;
    cout << "Enter the width of the rectangle: ";
    cin >> rect.width;

    // Calculate perimeter and area
    rect.perimeter = calculatePerimeter(rect.length, rect.width);
    rect.area = calculateArea(rect.length, rect.width);

    // Print the perimeter and area
    cout << "Perimeter of the rectangle: " << rect.perimeter << endl;
    cout << "Area of the rectangle: " << rect.area << endl;

    return 0;
}