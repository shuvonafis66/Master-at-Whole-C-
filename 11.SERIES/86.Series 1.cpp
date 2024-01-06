#include <iostream>

using namespace std;

int main(){


int n,sum=0;

cout<<"Enter the last number of Series: ";
cin>>n;

for(int i=1;i<=n;i++)

{

    if(i<n)
    {
        cout<<i<<"+";
    }

    else
        cout<<i;
    sum=sum+i;
}


cout<<"="<<sum;




return 0;
}





