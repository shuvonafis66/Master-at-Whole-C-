#include <iostream>

using namespace std;

int main()
{
    int ver;

    cout<<"Enter the vertical Line: ";
    cin>>ver;


    //for(int i=1;i<=ver;i++)
    for(int i=ver;i>=1;i--)//fliping
    {
        for (int j=1;j<=i;j++)

        {
            cout<<" * ";
        }

        cout<<endl;
    }

    return 0;
}
