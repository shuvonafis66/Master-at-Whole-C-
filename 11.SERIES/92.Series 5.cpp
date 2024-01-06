#include <iostream>

using namespace std;


int main()

{
    int x1,x2,sum=0;

    cout<<"Enter Number i  & ii : ";
    cin>>x1;



    for(int i=1;i<=x1;i++)

    {
sum=sum+i*(2*i+1);

if(i<x1)
    cout<<i<<'x'<<2*i+1<<"+";
    else
        cout<<i<<'x'<<2*i+1<<"=";

    }


    cout<<sum;


    return 0;
}


