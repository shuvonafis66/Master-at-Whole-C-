#include<iostream>


using namespace std;


int main()

{
    int arr[]={12,131,74,23,13,42,44},x,i=0;


    cout<<"Enter which element you wan to find: ";
    cin>>x;


    while(x!=arr[i])


    {
        i++;

    }


    cout<<"The position of the elements is "<<i+1;


    return 0;
}
