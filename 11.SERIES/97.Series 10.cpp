#include <iostream>

using namespace std;

int main() {
    int n, a = -2;

    cout << "Enter the last number: ";
    cin >> n;

    while (a!=n) {
        a = a + 2;
        cout << a << " ";
    }

    return 0;
}
