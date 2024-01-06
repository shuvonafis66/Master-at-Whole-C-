#include <iostream>

using namespace std;

int main()

{
    int a,b;

    cout<<"Please Enter Two Number: "<<endl;
    cin>>a>>b;

    // = operator

    a=b;

    cout<<"After Performing a ="<<a<<endl;
    //     += operator
    a+=b;
    cout<<"After Performing a ="<<a<<endl;

    //     -= operator
    a-=b;
    cout<<"After Performing a ="<<a<<endl;

    //    /= operator
    a/=b;
    cout<<"After Performing a ="<<a<<endl;

    //     *= operator
    a*=b;
    cout<<"After Performing a ="<<a<<endl;

    //     %= operator
    a%=b;
    cout<<"After Performing a ="<<a<<endl;

    return 0;

}
