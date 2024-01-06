#include <iostream>
#include <iomanip>

using namespace std;

int main()

{

    int n,i=0,arr[100];
    cout<<"Enter a Decimal number: ";
    cin>>n;

    while(n!=0)

    {

        arr[i]=n%16;
        n=n/16;
        i++;
    }

    --i;

    cout<<"The Hexadecimal Number is: ";

    for(int j=i;j>=0;j--)
    {

        cout<<uppercase<<hex<<arr[j]<<" ";
    }

    return 0;
}
