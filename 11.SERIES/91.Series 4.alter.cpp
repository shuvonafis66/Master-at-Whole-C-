#include<iostream>

using namespace std;


int main()

{
    int x1,x2,sum=0,a=1,b=2;

    cout<<"Enter The last Numbers: ";
    cin>>x1>>x2;


    while(a<=x1&& b<=x2)


    {
        sum=sum+(a*b);
        a=a+1;
        b=b+1;
    }

    cout<<"Sum is: "<<sum;

    return 0;
}
