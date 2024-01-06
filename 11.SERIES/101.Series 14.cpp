//1.5+2.5+3.5+4.5+....................n;

#include <iostream>


using namespace std;

int main()
{
    float n,sum=0;
    cout<<"Enter The last number: ";
    cin>>n;



    for(float i=1.5;i<=n;i=i+1.0)
    {
        sum=sum+i;

        if(i<n-1)

            cout<<i<<"+"<<" ";
        else
            cout<<i<<"="<<" ";
    }
cout<<sum;

    return 0;
}
