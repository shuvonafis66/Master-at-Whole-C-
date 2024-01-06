#include <iostream>

using namespace std;

int main() {
    char choice;

    do {
        int n, k = 0;

        cout << "Enter a number to check prime or not: ";
        cin >> n;

        for (int i = 1; i <= n; i++) {
            if (n % i == 0)
                k++;
        }

        if (k <= 2)
            cout << "This is a prime number ";
        else
            cout << "This is not a prime number ";

        cout << "\nDo you want to check another number? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    return 0;
}

