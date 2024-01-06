//1-2+3-4+5-6......+n

#include <iostream>

using namespace std;


int main()
{

    int n,sum=0;

    cout<<"Enter The last Number: ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        if (i%2==0)

        {

            sum=sum-i;

            if(i<n)
                cout<<i<<"+";

            else

                cout<<i<<"=";
        }
        else

        {
            sum=sum+i;
            if(i<n)
                cout<<i<<"-";

            else

                cout<<i<<"=";
        }
    }

    cout<<sum;

    return 0;


}
