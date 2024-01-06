#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int x, lar,lar2;

    cout << "How many elements you want to print: ";
    cin >> x;
    int arr[x];

    for (int i = 0; i < x; i++)
    {
        cout << "Enter element no " << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << endl;
    cout << "The Elements are: ";

    for (int i = 0; i < x; i++)
    {
        cout << arr[i] << " ";
    }

    lar = arr[0]; // Initialize 'lar' with the first element of the array

    for (int i = 1; i < x; i++) // Start the loop from the second element
    {
        if (arr[i] > lar) // Compare with the current largest element
        {
            lar = arr[i]; // Update 'lar' if a larger element is found
        }
    }

    cout << endl;
    cout << "The largest element is: " << lar;


    lar2 =  INT_MIN; // Initialize 'lar' with the first element of the array

    for (int i = 0; i < x; i++) // Start the loop from the second element
    {
        if (arr[i] > lar2 && arr[i] < lar) // Compare with the current largest element
        {
            lar2 = arr[i]; // Update 'lar' if a larger element is found
        }
    }

    cout << endl;
    cout << "The Second largest element is: " << lar2;
    return 0;
}

