#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, x = 0, y = 0, z = 0, originalValue = 0, i = 0,m=0;

    cout << "Enter a number to determine if it's Automorphic or not: ";
    cin >> n;
originalValue = n;

    x = n * n;
while (n != 0) {
        y = n / 10;

        n = y;
        i++;
    }

    m=pow(10,i);

    cout<<m;


   z = x%m;


  if (originalValue == z)
        cout << "The Number is Automorphic";
    else
        cout << "The number is not Automorphic";

    return 0;
}
