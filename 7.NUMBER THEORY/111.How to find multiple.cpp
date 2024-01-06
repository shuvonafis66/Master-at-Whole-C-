#include <iostream>

using namespace std;


int main(){


int n,k,lcm=0;

cout<<"Enter a number to find multiple: "<<endl;
cin>>n;
cout<<"How much multiple you want: "<<endl;
cin>>k;

cout<<"The L.C.M are: ";
for(int i=1;i<=k;i++)

{
    lcm=n*i;

    cout<<lcm<<" ";
}


return 0;


}
