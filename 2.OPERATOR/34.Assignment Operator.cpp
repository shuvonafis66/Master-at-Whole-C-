#include <iostream>

using namespace std;

int main() {
    int x, y;

    cout << "Please enter two numbers for performing assignment operators: ";
    cin >> x >> y;

    int originalX = x; // Store the original value of x

    x += y;
    cout << "After adding y, x is: " << x << endl;

    x = originalX; // Reset x to its original value

    x -= y;
    cout << "After subtracting y, x is: " << x << endl;

    x = originalX; // Reset x to its original value

    x *= y;
    cout << "After multiplying by y, x is: " << x << endl;

    x = originalX; // Reset x to its original value

    x /= y;
    cout << "After dividing by y, x is: " << x << endl;

    x = originalX; // Reset x to its original value

    x %= y;
    cout << "After modulo by y, x is: " << x << endl;

    return 0;
}
