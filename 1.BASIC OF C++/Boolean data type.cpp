#include <iostream>

using namespace std;

int main() {
    int number;
    bool isPositive;

    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is positive
    isPositive = (number > 0);

    // Output the result
    if (isPositive) {
        cout << number << " is positive." << endl;
    } else {
        cout << number << " is non-positive (zero or negative)." << endl;
    }

    return 0;
}

