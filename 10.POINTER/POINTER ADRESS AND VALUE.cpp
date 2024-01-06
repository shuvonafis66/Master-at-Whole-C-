#include<iostream>

using namespace std;


int main()

{
    int x,y,z;

    cout<<"Enter Three number consecutively: ";
    cin>>x>>y>>z;

    int *p1=&x,*p2=&y,*p3=&z;


    cout<<"The address of first number is: "<<p1<<endl;
    cout<<"The adress of second number is: "<<p2<<endl;
    cout<<"The adress of Third number is: "<<p3<<endl;
    cout<<"The value of first number is: "<<*p1<<endl;
    cout<<"The value of Second Number is: "<<*p2<<endl;
    cout<<"The value of Third Number is: "<<*p3<<endl;



    return 0;
}
