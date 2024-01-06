#include <iostream>
using namespace std;

int main()
{
    int ver;

    cout<<"Enter the vertical line Number: ";
    cin>>ver;

    for(int i=1; i<=ver; i++)
    {
        for(int j=1; j<=i; j++)

        {
            char s=(j+64);
            cout<<s;

        }


        for(int j=1;j<=10-2*i;j++)

        {
            cout<<" ";
        }



        for (int j=i; j>=1; j--)

        {
            char s=(j+64);
            cout<<s;
        }


        cout<<endl;
    }
    return  0;
}



