#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,i=1,i2=0,arr1[100],arr2[100],sum=0;
    cout<<"Enter a Number: ";
    cin>>n;

    while(n!=0)
    {
       arr1[i]=n%10;
       n=n/10;
       i++;
    }


    --i;
    for(int j=0;j<i;j++)

    {
        sum=sum+arr1[j+1]*pow(2,j);
    }

while(sum!=0)

    {
        arr2[i2]=sum%8;
        sum=sum/8;
        i2++;
    }

    --i2;

for(int j=i2;j>=0;j--)
    {
        cout<<arr2[j];
    }

return 0;

}

