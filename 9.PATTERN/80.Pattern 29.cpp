#include <iostream>


using namespace std;

int main(){


int ver;

cout<<"Enter The Vertical Line: ";
cin>>ver;



for(int i=0;i<=ver;i++)
{
    for(int j=0;j<=i;j++)

    {

        char s=('E'-i+j);/*There is a problem with this code.In this line, you are trying to calculate the ASCII value of the character to be printed using the formula (69 + j - i). However, this calculation might lead to values outside the printable ASCII range (32 to 126).

When i is greater than j, j - i becomes negative, and adding it to 69 can result in values less than 32, which are not valid ASCII characters.

To fix this issue, you need to make sure that the calculated value is within the valid ASCII range.*/



        cout<<s;


    }

    cout<<endl;
}

return 0;



}
