#include<iostream>


using namespace std;

int main(){

int n,i;

cout<<"Enter How many elemenets you want to store: ";
cin>>n;


int arr1[n],arr2[n];

for(i=0;i<n;i++)

{
    cout<<"Enter the elements of First Array:  "<<i+1<<": ";
    cin>>arr1[i];
}


cout<<endl;

for(i=0;i<n;i++)

{
    cout<<"Enter the elements of Second Array:  "<<i+1<<": ";
    cin>>arr2[i];
}


cout<<endl;


cout<<"After Addition We got: ";

for(i=0;i<n;i++)

{
    cout<<arr1[i]+arr2[i]<<" ";
}


return 0;

}

