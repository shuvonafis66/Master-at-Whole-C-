#include <iostream>

using namespace std;

int main()
{

    int ver;

    cout<<"Enter The veritical line: ";
    cin>>ver;


    for(int i=0; i<ver; i++)
    {
        for(int j=0; j<ver-i-1; j++)
        {
            cout<<" ";
        }

        for(int x=0; x<2*i+1; x++)

        {
            cout<<"*";
        }
        cout<<endl;
    }


    for(int i=0; i<ver; i++)

    {

        for(int l=0; l<2*i-i; l++)

        {
            cout<<" ";
        }

        for(int j=i; j<2*ver-i-1; j++)

        {
            cout<<"*";
        }



        cout<<endl;

    }

    return 0;

}
