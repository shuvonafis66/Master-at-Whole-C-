#include <iostream>

using namespace std;

int main()

{
    int n,i=1,sum=0;

    cout<<"Enter a number to check it,s factor ";
    cin>>n;

for(i=1;i<n;i++)
{
    if(n%i==0)
        sum=sum+i;
}

if (sum==n)

    cout<<"This is a perfect number";
else

    cout<<"This is not a perfect number";



  return 0;
}
