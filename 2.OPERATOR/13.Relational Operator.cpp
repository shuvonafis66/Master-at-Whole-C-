#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Equal to (==)
    cout << num1 << " == " << num2 << " is " << (num1 == num2) << endl;

    // Not equal to (!=)
    cout << num1 << " != " << num2 << " is " << (num1 != num2) << endl;

    // Greater than (>)
    cout << num1 << " > " << num2 << " is " << (num1 > num2) << endl;

    // Less than (<)
    cout << num1 << " < " << num2 << " is " << (num1 < num2) << endl;

    // Greater than or equal to (>=)
    cout << num1 << " >= " << num2 << " is " << (num1 >= num2) << endl;

    // Less than or equal to (<=)
    cout << num1 << " <= " << num2 << " is " << (num1 <= num2) << endl;

    return 0;
}
