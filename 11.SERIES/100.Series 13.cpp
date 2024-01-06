#include <iostream>

using namespace std;

int main(){


int n,sum=0;

cout<<"Enter The last Number: ";
cin>>n;


for(int i=0;i<n;i++)
{
    sum=sum+2*i+1;
    if (i<n-1)
        cout<<2*i+1<<"+"<<" ";
    else
        cout<<2*i+1<<"="<<" ";
}

cout<<sum;


return 0;




}


