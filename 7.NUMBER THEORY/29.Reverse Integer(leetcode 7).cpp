#include<iostream>

using namespace std;

int main()
{

    int x,digit,ans=0;
    cout<<"Enter a number you want to reverse: "<<endl;
    cin>>x;



    while(x!=0)
    {digit=x%10;
    ans=(ans*10)+digit;
    x=x/10;
    }

    cout<<"The reverse Number is: "<<ans<<endl;

    return 0;
}
