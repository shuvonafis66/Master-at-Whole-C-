#include <iostream>
using namespace std;
int main() {
    char x;
    cout << "Enter a letter: " << endl;
    cin >> x;
    x = tolower(x);

    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
        cout << "The letter is vowel" << endl;
    } else
        cout << "The letter is consonant" << endl;

    return 0;
}
