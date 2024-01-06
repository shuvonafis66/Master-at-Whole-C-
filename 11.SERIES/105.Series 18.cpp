//1^2 x 2^2 x 3^2......................n;


#include <iostream>


using namespace std;


int main(){

    int n,sum=1;


    cout<<"Enter The last number: ";
    cin>>n;




    for(int i=1;i<=n;i++)
    {
        sum=sum*i*i;


        if(i<n)

            cout<<i<<"^2"<<"x"<<" ";
        else
            cout<<i<<"^2"<<"="<<" ";

    }


    cout<<sum;


    return 0;








}

