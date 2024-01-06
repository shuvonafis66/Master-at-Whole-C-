#include <iostream>

using namespace std;

int x=20;//Global variable


int main()
{
    int x;//local variable

    cout<<"Enter a number: "<<endl;
    cin>>x;

    cout<<"The value that enter you: "<<::x;//scope resulation operator helps to declare the value of global variable.


    return 0;

}
