#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,i=1,arr[100],sum=0;
    cout<<"Enter a Hexadecimal Number to convert into Decimal: ";
    cin>>n;

    while(n!=0)
    {
       arr[i]=n%10;
       n=n/10;
       i++;
    }


    --i;
    for(int j=0;j<i;j++)

    {
        sum=sum+arr[j+1]*pow(16,j);
    }

    cout<<"The decimal number is: "<<sum;



    return 0;

}


