#include <iostream>
#include <cmath>

using namespace std;

int main(){


    int n,num1[50],i=0,n2=0,j=0;


    cout<<"Enter a number to : ";
    cin>>n;

int    x=n;

    while(n!=0)

    {
        num1[i]=n%10;
        n=n/10;
        i++;
    }

    while(i>0)
    {
        n2=n2*10+num1[j];
        i--;
        j++;
    }

    if(x==n2)
    {
        cout<<"It is a Palindrome Number";
    }

    else

        cout<<"It is not a palindrome Number";

        return 0;


}
