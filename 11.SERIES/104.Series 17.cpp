#include<iostream>

using namespace std;

int main(){


int n,sum=1;

cout<<"Enter The last Number: ";
cin>>n;

for(int i=1;i<=n;i++)

{
    sum=sum*i;

    if(i<n)

        cout<<i<<'x'<<" ";

    else
    cout<<i<<"="<<" ";

}

cout<<sum;

return 0;






}
