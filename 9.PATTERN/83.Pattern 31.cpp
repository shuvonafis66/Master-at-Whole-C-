#include <iostream>

using namespace std;

int main()

{

    int ver;
    cout<<"Enter the Vertical line: ";
    cin>>ver;


        for(int i=ver;i>=1;i--)
    {
        for (int j=i;j<=ver;j++)

        {
            cout<<"*";
        }
        for (int j=1;j<=2*i-2;j++)

        {
            cout<<" ";
        }
        for (int j=i;j<=ver;j++)

        {
            cout<<"*";
        }




        cout<<endl;
    }








    for(int i=2;i<=ver;i++)
    {
        for (int j=i;j<=ver;j++)

        {
            cout<<"*";
        }
        for (int j=1;j<=2*i-2;j++)

        {
            cout<<" ";
        }
        for (int j=i;j<=ver;j++)

        {
            cout<<"*";
        }




        cout<<endl;
    }



    return 0;
}
