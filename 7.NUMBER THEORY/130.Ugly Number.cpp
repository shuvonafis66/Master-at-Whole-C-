#include <iostream>

int main() {
    using namespace std;

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num <= 0) {
        cout << "Ugly numbers are defined for positive integers only." << endl;
    } else {
        while (num % 2 == 0) {
            num /= 2; // Divide by 2 as long as it's divisible
        }
        while (num % 3 == 0) {
            num /= 3; // Divide by 3 as long as it's divisible
        }
        while (num % 5 == 0) {
            num /= 5; // Divide by 5 as long as it's divisible
        }

        if (num == 1) {
            cout << "The entered number is an ugly number." << endl;
        } else {
            cout << "The entered number is not an ugly number." << endl;
        }
    }

    return 0;
}
