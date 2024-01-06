#include<iostream>

using namespace std;

int main()

{
    int x;

    cout<<"Enter a number"<<endl;
    cin>>x;

    if(x<0)
        cout<<"The absolute Value is: "<<(-x)<<endl;
    else
        cout<<"The absolute Value is: "<<x<<endl;

    return 0;
}
