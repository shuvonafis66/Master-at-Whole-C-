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

    cout<<"After Applying Bubble sort The elements are: ";

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)

        {
            if(arr[j]>arr[j+1])

                //Swapping
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }



        }
    }


    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }




}

