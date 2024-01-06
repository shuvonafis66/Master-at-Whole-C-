#include <iostream>


using namespace std;

int main(){


int ver,n=1;

cout<<"Enter the number of vertical line: ";
cin>>ver;


for(int i=0;i<ver;i++)


{
    for (int j=66;j<=66+i;j++)//ASCI VALUE IS WORKING LIKE THIS
    {
        cout<<j<<" ";
    }

    cout<<endl;
}


return 0;

}

