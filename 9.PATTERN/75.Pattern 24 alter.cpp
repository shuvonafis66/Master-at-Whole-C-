#include<iostream>
using namespace std;

int main()

{

int n;
cout<<"The number of line: ";
cin>>n;


    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout<<" ";
        }

        for(int j=1; j<=i; j++)
        {
            char s=(j+64);
            cout<<s;
        }

        for(int j=i-1; j>=1; j--)
        {
            char s=(j+64);
            cout<<s;
        }



        cout<<endl;

    }

    return 0;

}
