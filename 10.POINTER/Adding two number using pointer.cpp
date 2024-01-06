//Adding Three number using pointer

#include<iostream>

using namespace std;


int main()

{
    int x,y,z;

    cout<<"Enter Three number consecutively: ";
    cin>>x>>y>>z;

    int *p1=&x,*p2=&y,*p3=&z;

int sum=*p1+*p2+*p3;

cout<<"The sum of the three number is: "<<sum<<endl;


    return 0;
}

