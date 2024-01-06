#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x, y;

    cout << "Please Enter your first name: " << endl;
    getline(cin, x); // Corrected the syntax for getline
    cout << "Please Enter your Second name: " << endl;
    getline(cin, y); // Corrected the syntax for getline

    cout << "Here is your full name: " << x << " " << y; // Added space between x and y

    return 0;
}
