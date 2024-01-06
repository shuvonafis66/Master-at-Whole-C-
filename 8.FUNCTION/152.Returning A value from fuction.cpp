#include <iostream>

using namespace std;


int add(int a,int b)
{
    int sum=a+b;
    return sum;
}




int main(){

int x,y;

cout<<"Enter Two Number: ";
cin>>x>>y;


int result= add(x,y);

cout<<"After Addition we get: "<<result;



}
