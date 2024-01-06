#include<iostream>

using namespace std;

int main(){

int x,i=0,y;

cout<<"Enter a number to count its digit: ";
cin>>x;



while(x!=0){

    y=x/10;
    x=y;
    i++;
}

cout<<"The number of digit is: "<<i;



}
