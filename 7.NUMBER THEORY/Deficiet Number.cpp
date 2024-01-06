#include <iostream>

using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a positive number to check if it's deficient or not: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1; // Exit the program with an error code
    }

    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            sum = sum + i;
    }

    if (n > sum)
        cout << "This is a deficient number";
    else
        cout << "This is not a deficient number";

    return 0;
}
