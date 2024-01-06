#include <iostream>

using namespace std;


int main(){

int n;

cout<<"Enter the vertical Line: ";
cin>>n;


int i;



for(i=0;i<n+3;i++)

{
    for(int j=0;j<n;j++)
    {
        if((i==0||i==n+2)||(i%2==0&&j==3)||(i%2==0&&j==0))

            cout<<"*";

        else
            cout<<" ";
    }

    cout<<endl;
}



return 0;



}
