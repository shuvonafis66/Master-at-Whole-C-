#include <iostream>

using namespace std;

int main()
{



    int n,count=0;
    cout<<"Please Enter a number to check it is composite or not: ";
    cin>>n;


    for(int i=1; i<=n; i++)


    {

        if(n%i==0)

            count++;
    }


    if(count>2)

        cout<<"This is a composite number";

    else

        cout<<"This is not a composite number";







}
