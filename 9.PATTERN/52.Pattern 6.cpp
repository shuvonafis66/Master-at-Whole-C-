#include<iostream>

using namespace std;

int main(){

int ver;

cout<<"Enter Vertical Line: ";
cin>>ver;

for(int i=1;i<=ver;i++)
{
    for (int j=i;j<=ver;j++)

        {cout<<" "<<i<<" ";}

        cout<<endl;

}

return 0;

}

