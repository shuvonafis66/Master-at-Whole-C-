#include <iostream>

using namespace std;


int main()
{
    int x ,y;

    cout<<"Enter Two Number: "<<endl;
    cin >>x>>y;

    //case 1

    float d=x/y;

    cout<<"The value is: "<<d<<endl;

    //case 2

    float z=(float)x/y;//implicit

    cout<<"The value is: "<<z<<endl;

    //case 3

    float m= (float)(x/y);//explicit

    cout<<"The value is: "<<m<<endl;

    return 0;

}
