#include<iostream>
#include<iomanip>

using namespace std;

int main()

{
    int x,y;


    cout<<"Enter Two Number: "<<endl;
    cin>>x>>y;

    int z=x+y;
    int m=x-y;
    int n=x*y;
    float p=(float)x/y;


    cout<<setw(30)<<"Sum is: "<<z<<endl;
    cout<<setw(30)<<"Subtraction is: "<<m<<endl;
    cout<<setw(30)<<"Multiplication is: "<<n<<endl;
    cout<<setw(30)<<"Division is: "<<p<<endl;


    return 0;
}
