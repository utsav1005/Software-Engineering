// Basic Input/Output
// o Write a C++ program that accepts user input for their name and age and then
// displays a personalized greeting.
#include <iostream>
using namespace std;

int main() {
    int age;    

    cout << "Enter your age: ";
    cin >> age;

    // Displaying output
    cout << "Hello,"  << " You are " << age << " years old." << endl;

    return 0;
}
