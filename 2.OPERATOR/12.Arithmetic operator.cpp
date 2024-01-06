#include <iostream>

using namespace std;

int main() {
    int num1 = 10;
    int num2 = 5;

    // Addition
    int sum = num1 + num2;
    cout << "Sum: " << sum << endl;

    // Subtraction
    int difference = num1 - num2;
    cout << "Difference: " << difference << endl;

    // Multiplication
    int product = num1 * num2;
    cout << "Product: " << product << endl;

    // Division
    int quotient = num1 / num2;
    cout << "Quotient: " << quotient << endl;

    // Modulo
    int remainder = num1 % num2;
    cout << "Remainder: " << remainder << endl;

    // Increment (post-increment)
    num1++;
    cout << "Incremented num1: " << num1 << endl;

    // Decrement (post-decrement)
    num2--;
    cout << "Decremented num2: " << num2 << endl;

    // Pre-Increment
    ++num1;
    cout << "Pre-Incremented num1: " << num1 << endl;

    // Pre-Decrement
    --num2;
    cout << "Pre-Decrement num2: " << num2 << endl;

    return 0;
}
