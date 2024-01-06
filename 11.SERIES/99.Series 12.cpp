#include <iostream>

using namespace std;

int main(){


int n,sum=0;

cout<<"Enter The last Number: ";
cin>>n;


for(int i=1;i<=n;i++)
{
    sum=sum+2*i;
    if (i<n)
        cout<<2*i<<"+"<<" ";
    else
        cout<<2*i<<"="<<" ";
}

cout<<sum;


return 0;




}

