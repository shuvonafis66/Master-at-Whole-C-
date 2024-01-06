#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a number to check it is ugly or not: ";
    cin>>n;

        if(n<0)
            {
                cout<<"Invalid Input.";
            }
            else
        {
            while(n%2==0)
                n=n/2;

            while(n%3==0)
                n=n/3;

            while(n%5==0)
                n=n/5;



        if(n==1)
            cout<<"This is  a ugly number";
        else

            cout<<"This is not a ugly number";


        }
}
