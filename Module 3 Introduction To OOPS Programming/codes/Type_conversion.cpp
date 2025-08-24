#include <iostream>
using namespace std;

int main() {
    int a = 10;
    double b = 5.5;

    // Implicit Conversion (done automatically)
    double sum = a + b;   // a is automatically converted to double
    cout << "Implicit Conversion:" << endl;
    cout << "a + b = " << sum << endl;

    // Explicit Conversion (done manually)
    double x = 9.8;
    int y = (int)x;   // manually converting double to int
    cout << "\nExplicit Conversion:" << endl;
    cout << "x = " << x << " casted to int = " << y << endl;

    return 0;
}
