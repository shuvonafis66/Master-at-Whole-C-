#include <iostream>

using namespace std;

int main() {
    double celsius, fahrenheit;

    cout << "Enter the Celsius temperature: ";
    cin >> celsius;

    fahrenheit = (celsius * 1.8) + 32;

    cout << "After converting, the temperature is: " << fahrenheit << " degrees Fahrenheit" << endl;

    return 0;
}
