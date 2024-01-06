#include <iostream>


using namespace std;

int main(){


int ver,n=1;

cout<<"Enter the number of vertical line: ";
cin>>ver;


for(int i=0;i<ver;i++)


{
    for (int j=0;j<=i;j++)
    {
        cout<<n++<<" ";
    }

    cout<<endl;
}


return 0;







}
