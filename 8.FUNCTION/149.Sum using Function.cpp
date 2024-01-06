#include<iostream>

using namespace std;



void add (int a,int b)

{
    int sum=a+b;
    cout<<"The sum is: "<<sum<<endl;
}

int main()

{

    int x,y;
    cout<<"Enter Two number: ";
    cin>>x>>y;

    add(x,y);
}

