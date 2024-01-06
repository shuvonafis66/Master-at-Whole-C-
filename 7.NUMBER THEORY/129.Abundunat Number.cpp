#include <iostream>

using namespace std;

int main()
{
    int n, i, sum = 0;

    cout << "Enter a number to check if it is abundant or not: ";
    cin >> n;

    for (i = 1; i < n; i++) // Iterate up to n - 1, not n
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum > n) // Corrected if condition
    {
        cout << "The number is abundant." << endl;
    }
    else
    {
        cout << "The number is not abundant." << endl;
    }

    return 0;
}
