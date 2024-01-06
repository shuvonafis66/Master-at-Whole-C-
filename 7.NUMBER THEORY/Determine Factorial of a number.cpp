#include<iostream>

using namespace std;

int main(){

int x,fact=1;

cout<<"Enter a number to determine the factorial: ";
cin>>x;

for(int i=0;i<x;i++)

{
    fact=fact*(x-i);
}

cout<<"The factorial is: "<<fact<<endl;

return 0;


}
