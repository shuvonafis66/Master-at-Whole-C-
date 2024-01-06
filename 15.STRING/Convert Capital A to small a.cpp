#include<iostream>

using namespace std;


char convert(char x)
{
    char y= char (x-'A')+'a';


    return y;
}

int main()
{
    char name;

    cout<<"Enter which alphabet you want to make capital: ";
    cin>>name;

char z=convert(name);


    cout<<"After Converting The letter is: "<<z<<endl;

    return 0;



}

