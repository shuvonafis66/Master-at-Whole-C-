#include<iostream>

using namespace std;

int main()

{


    int n,i=2,j=1,k;

    cout<<"Enter How many lucas Number you want to print: ";
    cin>>n;



    for(int m=0; m<n-1; m++)

    {
           if (m<1)

    cout<<i<<" "<<j<<" ";


    else
    {
k=i+j;
        cout<<k<<" ";
        i=j;
        j=k;


    }

    }





    return 0;




}

