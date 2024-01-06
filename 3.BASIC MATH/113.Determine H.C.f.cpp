#include <iostream>

using namespace std;

int main()


{
    int x,y,sum=0,p,i;

    cout<<"Enter Two Number to determine H.C.F: ";
    cin>>x>>y;

    if(x<y)
        p=x;
    else
        p=y;
    for(i=1;i<=p;i++)

    {
        if(x%i==0 &&y%i==0)

        sum=i;


    }


    cout<<"THE H.C.F of the two number is: "<<sum;
}
