#include<iostream>
#include<climits>

using namespace std;

int main()

{
    int n,min,i,min2;

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





       min2=arr[0];

       for( i=1;i<n;i++)

    {
        if(arr[i]<min2&&arr[i]>min)

            min2=arr[i];
    }

    cout<<"The Second minimum array element is: "<<min2<<endl;




return 0;


}



