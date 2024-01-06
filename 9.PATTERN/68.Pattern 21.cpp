#include <iostream>


using namespace std;

int main(){


int ver,n=1;

cout<<"Enter the number of vertical line: ";
cin>>ver;


for(int i=0;i<ver;i++)


{
    for (char j='A';j<='A'+i;j++)
    {
        cout<<j<<" ";
    }

    cout<<endl;
}


return 0;

}

