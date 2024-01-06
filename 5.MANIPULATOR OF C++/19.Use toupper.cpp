#include <iostream>
using namespace std;
int main() {
    char x;
    cout << "Enter a letter: " << endl;
    cin >> x;
    x = toupper(x);

    if (x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') {
        cout << "The letter is vowel" << endl;
    } else
        cout << "The letter is consonant" << endl;

    return 0;
}

