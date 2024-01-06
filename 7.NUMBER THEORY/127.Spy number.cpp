#include <iostream>

using namespace std;

int main() {
    int n, x, z, sum = 0, product = 1;

    cout << "Enter a Number to check if it's a spy number: ";
    cin >> n;

    int originalValue = n;

    while (n != 0) {
        z = n % 10;
        x = n / 10;
        sum += z;
        product *= z;
        n = x;
    }

    if (sum == product)
        cout << originalValue << " is a spy Number." << endl;
    else
        cout << originalValue << " is not a spy number." << endl;

    return 0;
}
