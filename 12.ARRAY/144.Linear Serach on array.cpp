#include<iostream>

using namespace std;

int main(){

int n,i,x;
cout<<"Enter The array Size: ";
cin>>n;

int arr[n];

for( i=0;i<n;i++)

{
    cout<<"Enter the element No "<<i+1<<':'<<" ";
    cin>>arr[i];
}

cout<<endl;
cout<<"The elements are: ";
for( i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}

cout<<endl;
cout<<"Enter which elements you want to find: ";
cin>>x;
for(i=0;i<n;i++)

{
    if (x==arr[i])

    break;
}


cout<<"The elements is on "<<i+1<<" position";



return 0;





}


