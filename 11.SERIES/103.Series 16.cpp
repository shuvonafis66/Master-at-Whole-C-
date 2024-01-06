//1+1/2+1/3+1/4.............1/N
#include<iostream>
#include <iomanip>

using namespace std;


int main()
{
    int n;
    float sum=0;
    cout<<"Enter The last Number: ";
    cin>>n;


    for(int i=1;i<=n;i++)

    {
        sum=sum+1.0/i;

        if(i<n)

            cout<<"1/"<<i<<"+"<<" ";

            else
                cout<<"1/"<<i<<"="<<" ";

    }

    cout<<setprecision(2);
    cout<<fixed;
    cout<<sum;
}
