#include <iostream>

using namespace std;

int main()
{
    int ver;

    cout << "Enter a vertical Number: ";
    cin >> ver;

    for (int i = 0; i < ver; i++) {

        for (int j = 0; j < i + 1; j++) {
            cout << j + 1;
        }

        for (int j = 0; j < 5 - i; j++) {
            cout << " ";
        }

        for (int j = (2 * i) + 2; j >= i + 1; j--) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}

