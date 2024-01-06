#include <iostream>

using namespace std;

int main(){


int n,sum=0;

cout<<"Enter The last Number: ";
cin>>n;


for(int i=1;i<=n;i++)
{
    sum=sum+i;
    if (i<n)
        cout<<i<<"+"<<" ";
    else
        cout<<i<<"="<<" ";
}

cout<<sum;


return 0;




}
