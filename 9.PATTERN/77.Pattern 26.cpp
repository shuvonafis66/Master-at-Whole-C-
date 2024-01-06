#include <iostream>
using namespace std;

int main(){
int ver;

cout<<"Enter the vertical line Number: ";
    cin>>ver;

for(int i=1; i<=ver; i++)
    {

for (int j=i;j>=1;j--)

        {
            char s=(j+64);
            cout<<s;
        }


        cout<<endl;
}
return  0;
}




