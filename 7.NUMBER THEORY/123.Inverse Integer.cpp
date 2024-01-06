#include <iostream>

using namespace std;

int main(){


int x,i=1,y;

cout<<"Enter a number to Reverse: ";
cin>>x;


while(x!=0)
{
    y=x%10;
    x=x/10;

    cout<<y;

}

return 0;







}

