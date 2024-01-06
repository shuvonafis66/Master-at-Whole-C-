#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Prompt the user to enter three numbers
    cout << "Enter three numbers: ";

    // Read the three input numbers from the user
    cin >> num1 >> num2 >> num3;

    // Compare num1 with num2 and num3
    if (num1 <= num2 && num1 <= num3) {
        // Output the smallest number if num1 is the smallest
        cout << num1 << " is the smallest number." << endl;
    }
    // If num1 is not the smallest, compare num2 and num3
    else if (num2 <= num1 && num2 <= num3) {
        // Output the smallest number if num2 is the smallest
        cout << num2 << " is the smallest number." << endl;
    }
    // If neither num1 nor num2 is the smallest, num3 must be the smallest
    else {
        // Output the smallest number which is num3
        cout << num3 << " is the smallest number." << endl;
    }

    return 0;
}
