#include<iostream>
using namespace std;
int main()

{
    int x,sum=0,total=0;
    cout<<"Enter The maximum Number: "<<endl;
    cin>>x;
    for(int i=1; i<=x; i++)
    {
        for (int j=1; j<=i; j++)
        {
            sum=sum+j;

            if(j>1)
            {
                cout<<"+";
            }
            cout<<j;
        }
        cout<<"="<<sum;
        total=total+sum;
        sum=0;

        cout<<endl;
    }

    cout<<"The summation of is series is: "<<total<<endl;

    return 0;
}
