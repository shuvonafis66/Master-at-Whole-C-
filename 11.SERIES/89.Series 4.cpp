#include <iostream>

using namespace std;


int main()

{
    int x1,x2,sum=0;

    cout<<"Enter Number i  & ii : ";
    cin>>x1>>x2;



    for(int i=1;i<=x1;i++)

    {

    for(int j=i+1;j<=i+1;j++)
    {
         sum=sum+(i*j);

         if(i<x1)

            cout<<i<<"x"<<j<<"+";
         else
            cout<<i<<"x"<<j<<"=";
    }

    }


    cout<<sum;


    return 0;
}
