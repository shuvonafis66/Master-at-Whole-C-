#include<iostream>

using namespace std;

int main()

{
    int n,min,i;

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

    min=arr[0];

       for( i=1;i<n;i++)

    {
        if(arr[i]<min)

            min=arr[i];
    }

    cout<<"The minimum array element is: "<<min<<endl;




return 0;


}


