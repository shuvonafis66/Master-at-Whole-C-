#include <iostream>

using namespace std;

int main()

{

    int n,i=0,arr[100];
    cout<<"Enter a Decimal number: ";
    cin>>n;

    while(n!=0)

    {
        arr[i]=n%8;
        n=n/8;
        i++;
    }

    --i;

    cout<<"The O Number is: ";

    for(int j=i;j>=0;j--)
    {
        cout<<arr[j]<<" ";
    }

    return 0;
}

