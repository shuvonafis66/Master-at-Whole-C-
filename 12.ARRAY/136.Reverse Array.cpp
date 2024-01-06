#include<iostream>


using namespace std;

int main(){

int n,i;

cout<<"Enter How many elemenets you want to store: ";
cin>>n;


int arr[n];

for(i=0;i<n;i++)

{
    cout<<"Enter the elements number "<<i+1<<": ";
    cin>>arr[i];
}


cout<<"The elements are: ";
for(i=0;i<n;i++)

{
    cout<<arr[i]<<" ";
}

cout<<endl;

cout<<"After Reversing: ";


for(i=n-1;i>=0;i--)

{
    cout<<arr[i]<<" ";
}


return 0;




}
