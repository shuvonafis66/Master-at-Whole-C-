#include <iostream>

using namespace std;


int main()
{

    int ver;

    cout<<"Enter the vertical line: ";
    cin>>ver;


    for(int i=1; i<=ver; i++)
    {
        for(int j=ver; j>=ver-i+1; j--)
        {
            char s=(j+64);
            cout<<s<<" ";
        }
cout<<endl;

    }
return 0;

}

