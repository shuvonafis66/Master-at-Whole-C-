//Determine Length of array using keyword

#include<iostream>


using namespace std;

int main()

{
    int arr[]={1,2,3,6,2,4,2,4,10};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<n;
}

