// . POP vs. OOP Comparison Program
// o Write two small programs: one using Procedural Programming (POP) to calculate the
// area of a rectangle, and another using Object-Oriented Programming (OOP) with a
// class and object for the same task.
#include <iostream>
using namespace std;

// Function to calculate area
int calculateArea(int length, int width) {
    return length * width;
}

int main() {
    int length, width;

    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;

    int area = calculateArea(length, width);
    cout << "Area of Rectangle (POP) = " << area << endl;

    return 0;
}
