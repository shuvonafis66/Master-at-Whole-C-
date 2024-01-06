#include <iostream>

using namespace std;

int main()
{
    int n,i,j,temp=0;

    cout<<"How many elements you want to store: ";
    cin>>n;
    int arr[n];


    cout<<"Now elements need to be entered"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<"Enter The element No "<<i+1<<" :";
        cin>>arr[i];
    }

    cout<<endl;
    cout<<"Before Sorting The elements are: ";



    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;

        while(j>=0 && arr[j]>temp)

           {
             arr[j+1]=arr[j];
             j--;
           }


    }










    cout<<"After Applying Insertion sort The elements are: ";



    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }




}


