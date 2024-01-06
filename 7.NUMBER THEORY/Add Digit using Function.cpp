#include <iostream>

using namespace std;

int digit(int n)

{
    int sum=0;
    while(n!=0)
    {

        int x=n%10;
        n=n/10;
        sum=sum+x;
    }

    return sum;
}



int main()
{
    int n,sum1=0;
    cout<<"Enter a number to add it digit: ";
    cin>>n;

    sum1= digit(n);



    cout<<"Total is: "<<sum1;


    return 0;
}

