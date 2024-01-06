#include <iostream>

using namespace std;

int main(){

int ver;

char ch='A';

cout<<"Enter the number of vertical line: ";
cin>>ver;


for(int i=0;i<=ver;i++)
{
    for(int j=0;j<ver-i;j++)

    {
        cout<<ch++;
    }

    cout<<endl;

    ch='A';
}

return 0;





}
