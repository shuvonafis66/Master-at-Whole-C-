#include <iostream>
using namespace std;

int main() {
    int x, y, i = 1;

    cout << "Enter two numbers to determine L.C.M: ";
    cin >> x >> y;

    int mul1=1;

    while (mul1 % y != 0) {
        mul1 = x * i;
        i++;
    }

    cout << "The value of L.C.M: " << mul1 << endl;

    return 0;
}
