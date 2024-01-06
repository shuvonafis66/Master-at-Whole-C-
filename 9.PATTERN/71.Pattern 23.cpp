#include <iostream>

using namespace std;

int main(){


int ver;


cout<<"Enter The Vertical Line: ";
cin>>ver;


for(int i=0;i<ver;i++)
{
    for(int j=0;j<=i;j++)
    {


        char ch = 'A'+i;

        cout<<ch<<" ";


    }


        cout<<endl;
}

return 0;








}
