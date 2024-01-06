#include <iostream>

using namespace std;

int main(){


int n;

cout<<"Enter How many Random Number you want to print: ";
cin>>n;


for(int i=1;i<=n;i++)

{
    int randomnum=rand()%8;

    cout<<"Random Number No: "<<i<<" is: "<<randomnum<<endl;;
}


return 0;

}
