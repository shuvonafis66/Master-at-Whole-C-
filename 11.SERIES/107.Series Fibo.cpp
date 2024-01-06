/*Fibonacci Series:
0 1 1 2 3 5*/


#include<iostream>

using namespace std;

int main()

{


    int n,i=0,j=1,k;

    cout<<"Enter How many fibonacci Number you want to print: ";
    cin>>n;



    for(int m=0; m<n; m++)


   if (m<=1)

    cout<<m<<" ";

    else

    {

        k=i+j;
        cout<<k<<" ";
        i=j;
        j=k;


    }



    return 0;




}
