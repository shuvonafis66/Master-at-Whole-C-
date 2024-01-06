#include <iostream>


using namespace std;


int main(){


int ver;



cout<<"Enter vertical line Number: ";
cin>>ver;


for(int i=0;i<ver;i++)


{

    char ch1= 'A'+i;
    for(int j=0;j<=i;j++)

    {

        cout<<ch1;
        ch1--;

    }

    cout<<endl;
}


return 0;




}
