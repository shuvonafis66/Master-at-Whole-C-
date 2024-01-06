#include <iostream>


using namespace std;

int main()

{
    int n,ele,newelement,newposition,arr1[100];

    cout<<"Enter the number of elements: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter element No: "<<i+1<<": ";
        cin>>arr1[i];

    //Before Updating..
    }
    cout<<"The elements are: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }

    cout<<endl;
    cout<<"Enter the new element: "<<endl;
    cin>>newelement;

    cout<<"Enter the the position of assigning new value"<<endl;
    cin>>newposition;

    if(newposition>0 && newposition<n)
    {
       arr1[newposition-1]=newelement;



    cout<<endl;
    cout<<"The updated elements are: ";

    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
    }

    else
    {
        cout<<" Invalid Position";

    }



    return 0;

    }



