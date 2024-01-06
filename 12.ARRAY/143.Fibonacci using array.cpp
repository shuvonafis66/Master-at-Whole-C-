#include<iostream>


using namespace std;

int main(){


int n;


cout<<"Enter How many fibonacci number you want to print: ";
cin>>n;


int arr[n];



for(int i=0;i<n;i++)

{
    if(i<=1)

   {
      arr[i]=i;
    cout<<arr[i]<<" ";
   }

    else
    {arr[i]=arr[i-2]+arr[i-1];

    cout<<arr[i]<<" ";}
}

return 0;











}
