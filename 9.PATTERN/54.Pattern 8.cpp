#include <iostream>

using namespace std;

int main(){


int ver;
cout<<"Enter Vertical Line: ";
cin>>ver;

for(int i=0;i<ver;i++)
{
    for(int j=0;j<ver-i-1;j++)
    {
        cout<<" ";
    }

    for(int x=0;x<2*i+1;x++)

    {
        cout<<"*";
    }
cout<<endl;
}
return 0;

}
