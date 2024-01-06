#include<iostream>

using namespace std;


int main (){


char choice;

do{

    int n;

    cout<<"Enter a number to check odd or even: ";
    cin>>n;


    if(n%2==0)

        cout<<"The is a even Number"<<endl;

    else
        cout<<"This is a odd number"<<endl;

        cout<<"Do you want to check another number?(Y/N)";
cin>>choice;


}
while(choice=='Y'|| choice=='y');

return 0;




}















