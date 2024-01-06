#include<iostream>

using namespace std;

int main()
{
    int yr;

    cout << "Enter the year you want to determine: " << endl;
    cin >> yr;

    if ((yr % 4 == 0 && yr % 100 != 0) || (yr % 400 == 0)) {
        cout << "This is a leap year" << endl;
    } else {
        cout << "This is not a leap year" << endl;
    }

    return 0;
}
