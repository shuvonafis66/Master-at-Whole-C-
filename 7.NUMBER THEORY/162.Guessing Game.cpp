#include<iostream>

using namespace std;

int main()

{

    while(1)
    {


        int gnum,rannum;

        cout<<"Enter Your guess Number between 1-10: "<<endl;
        cin>>gnum;

        rannum=rand()%10+1;

        if(gnum==rannum)
        {
            cout<<"You won"<<endl;
            break;
        }

        else
        {
            cout<<"You lost.Try Again"<<endl;
            cout<<"Random Number Was "<<rannum<<endl;
        }
    }


    return 0;


}
