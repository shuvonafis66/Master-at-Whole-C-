#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        // Print spaces before numbers
        for (int j = 1; j <= n - i; ++j) {
            cout << "  ";
        }

        // Print numbers in descending order
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}

