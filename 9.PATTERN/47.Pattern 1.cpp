#include <iostream>

using namespace std;

int main()
{
    int ver,hor;

    cout<<"Enter Horizontal line: ";
    cin>>hor;
    cout<<"Enter Vertical line: ";
    cin>>ver;


    for(int i=1;i<=ver;i++)
    {
        for(int j=1;j<=hor;j++)
        {
            cout<<" * ";
        }

        cout<<endl;
    }

    return 0;
}
