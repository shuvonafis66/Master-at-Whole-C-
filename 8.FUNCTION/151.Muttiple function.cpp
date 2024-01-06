#include<iostream>
using namespace std;

void add(int a, int b)
{
    int sum = a + b;
    cout << "The sum is: " << sum << endl;
}

void sub(int a, int b)
{
    int diff = a - b;
    cout << "The difference is: " << diff << endl;
}

void mul(int a, int b)
{
    int result = a * b;
    cout << "The multiplication is: " << result << endl;
}

void divide(int a, int b)
{
    if (b == 0)
    {
        cout << "Division by zero is not allowed." << endl;
    }
    else
    {
        float result = static_cast<float>(a) / b;
        cout << "The division is: " << result << endl;
    }
}

int main()
{
    int x, y;
    cout << "Enter Two numbers: ";
    cin >> x >> y;

    add(x, y);
    sub(x, y);
    mul(x, y);
    divide(x, y);
}
