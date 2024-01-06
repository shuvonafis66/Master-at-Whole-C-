#include <iostream>

using namespace std;


int main()

{
    int ver;
    cout<<"Enter the number of vertical line: ";
    cin>>ver;

    char ch = 'A';

    for(int i=0; i<ver; i++)
    {


        for(int j=ver-(i+1); j>=1; j--)


        {
            cout<<" ";
        }

        for(char j='A'; j<='A'+i; j++)

        {
            cout<<j;
        }




        char ch1='A'+i-1;
        for(int j=0; j<i; j++)

        {

            cout<<ch1;
            ch1--;
        }

        cout<<endl;

    }

    return 0;
}
