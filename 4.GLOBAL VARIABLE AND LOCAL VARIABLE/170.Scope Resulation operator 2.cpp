#include <iostream>

using namespace std;

int x=20;//Global variable


int main()
{
    int x=10;//local variable
    :: x=30;//Change the value of global variable


    cout<<"The value that enter you: "<<::x;//scope resulation operator helps to declare the value of global variable.


    return 0;

}

