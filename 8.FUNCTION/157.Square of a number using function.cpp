#include<iostream>


using namespace std;

void square(int n)


{
    int sq=n*n;

    cout<<"The square of the number is: "<<sq<<endl;
}





int main(){


    int x,y,z;

    cout<<"Enter Three different numbers: ";
    cin>>x>>y>>z;


square(x);
square(y);
square(z);


}







