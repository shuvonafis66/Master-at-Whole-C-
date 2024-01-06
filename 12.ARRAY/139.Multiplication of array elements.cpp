#include<iostream>

using namespace std;

int main()

{
    int n,mul=1,i;

    cout<<"Enter The Size of Array: ";
    cin>>n;

    int arr[n];

    for(i=0;i<n;i++)

    {
        cout<<"Enter the element no "<<i+1<<": ";
        cin>>arr[i];
    }

    cout<<endl;

    cout<<"The elements are: ";

     for( i=0;i<n;i++)

    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    cout<<"The sum of all elements is: ";

    for(i=0;i<n;i++)

    {
        mul=mul*arr[i];
    }


    cout<<mul;





}


