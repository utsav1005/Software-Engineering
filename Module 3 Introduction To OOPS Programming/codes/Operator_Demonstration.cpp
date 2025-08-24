// Operator Demonstration
// o Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise
// operators. Perform operations using each type of operator and display the results.
// o Objective: Reinforce understanding of different types of operatorsin C++

#include<iostream>
using namespace std;

int main() {
    int a = 15, b = 10;

    // Arithmetic Operators
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl << endl;

    // Relational Operators
    cout << "Relational Operators:" << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b : " << (a > b) << endl;
    cout << "a < b : " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl << endl;

    // Logical Operators
    bool x = true, y = false;
    cout << "Logical Operators:" << endl;
    cout << "x && y = " << (x && y) << endl;
    cout << "x || y = " << (x || y) << endl;
    cout << "!x = " << (!x) << endl;
    cout << "!y = " << (!y) << endl << endl;

    // Bitwise Operators
    cout << "Bitwise Operators:" << endl;
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
   
    return 0;
}

