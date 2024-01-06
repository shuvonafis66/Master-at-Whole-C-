//Leap year or not


#include<iostream>

using namespace std;

int main()

{
    int year;
    cout<<"Enter a year to check it is leap year or not: ";
    cin>>year;


    if(year%400==0)

        cout<<"This is leap year";
    else if
    (year%4==0&& year%100!=0)
     cout<<"This is  leap year";
     else
     cout<<"This is not a leap year";

        return 0;
}
