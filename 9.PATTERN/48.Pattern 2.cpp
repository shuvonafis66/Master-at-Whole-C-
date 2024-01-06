#include <iostream>
using namespace std;

int main(){

int ver;

cout<<"Enter vertical line: "<<endl;
cin>>ver;


for(int i=1;i<=ver;i++)
{
    for(int j=1;j<=i;j++)
    {
        cout<<" * ";
    }

    cout<<endl;
}

return 0;

}
