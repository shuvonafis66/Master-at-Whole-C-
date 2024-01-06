#include <iostream>

using namespace std;

int main()

{

    int n,i=0,arr[100];
    cout<<"Enter a Decimal number: ";
    cin>>n;

    while(n!=0)

    {
        arr[i]=n%2;
        n=n/2;
        i++;
    }

    --i;

    cout<<"The Binary Number is: ";

    for(int j=i;j>=0;j--)
    {
        cout<<arr[j]<<" ";
    }

    return 0;
}
