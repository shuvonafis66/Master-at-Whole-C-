
//Copping duplicate elements on a new array

#include <iostream>

using namespace std;


int main()
{

    int n,i=0,j=0,count=0,arr2[100];

    cout<<"How many elements you want to store: ";
    cin>>n;

    int arr[n];

    while(i!=n)
    {
        cout<<"Enter the element No "<<i+1<<": ";
        cin>>arr[i];
        i++;
    }

    --i;

    cout<<"The elements are: ";
    while(j!=n)
    {
        cout<<arr[j]<<" ";
        j++;
    }



    //Coping duplicate elements in new array....

    for(i=0;i<n;i++)
{

        if(arr[i]==arr[i+1])
        {

            arr2[count]=arr[i];
            count++;
        }


}


cout<<endl;

    cout<<"The duplicate elements are: ";

    for(int i=0;i<count;i++)
    {
        cout<<arr2[i]<<" ";
    }




    return 0;
}

