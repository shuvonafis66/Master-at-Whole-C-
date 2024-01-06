#include<iostream>

using namespace std;


int main()
{
    int n,k=0;

    cout<<"Enter a number to check prime or not: ";
    cin>>n;

    for(int i=1;i<=n;i++)

    {
        if (n%i==0)

            k++;
    }


    if(k<=2)

        cout<<"This is a prime number ";

    else

    cout<<"This is a not prime number ";


    return 0;


    }
