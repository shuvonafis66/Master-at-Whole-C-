#include<iostream>


using namespace std;

int main()
{
    long int x,y=0,fact=1;

    cout<<"Enter the number of factorial: "<<endl;
    cin>>x;


    for(int i=0; i<x; i++)

    {
        fact=fact*(x-i);
    }

    cout<<"The factorial is: "<<fact;

    while(fact!=0)
    {
        x=fact%10;

        if(x==0)
            ++y;



        else
            break;

        fact=fact/10;


    }


    cout<<"\nThe number of trailing zero is: "<<y;

    return 0;


}
