#include<iostream>

using namespace std;

int main()
{

    int arr1[100],arr2[100],i=0,j=0;
    double n;

    cout<<"Enter a floating point number to convert it into binary: ";
    cin>>n;


    int x = int(n);
    double y=n-x;


    while(x!=0)
    {
        arr1[i]=x%2;
        x=x/2;
        i++;
    }

    --i;


    while(y!=0)

    {
        y=y*2;
        arr2[j]=int(y);
        y = y - int(y);
        j++;
    }

    --j;

    cout<<"The Binary Number is: ";

    for(int k=i;k>=0;k--)
    {
        cout<<arr1[k];
    }


    cout<<".";


    for(int k=0;k<=j;k++)
    {
        cout<<arr2[k];
    }




    return 0;



}
