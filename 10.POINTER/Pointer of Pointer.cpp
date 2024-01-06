#include<iostream>

using namespace std;

int main() {
    int x;

    cout << "Enter a number: ";
    cin >> x;

    int *p1 = &x;
    int **q = &p1;

    cout << "The address of the given value is: " << p1 << endl;
    cout << "The value of the given value is: " << *p1 << endl;
    cout << "The address of the pointer is: " << q << endl;
    cout << "The value of the pointer is: " << **q << endl;

    return 0;
}
