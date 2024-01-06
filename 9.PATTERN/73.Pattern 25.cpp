#include <iostream>

using namespace std;


int main(){

int ver;

cout<<"Enter the vertical number of line: ";
cin>>ver;

int i=0;

char ch='A';

for(int i=0;i<=ver;i++)
{
    for(char j=0;j<=i;j++)

    {

        cout<<ch;
        ch++;


    }
    ch='A';

    cout<<endl;

}

return 0;





}
