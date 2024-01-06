#include <iostream>

using namespace std;


int main()
{
    int n,arr[100],count=1;

    cout<<"Enter a number to determine it factor: ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        if(n%i==0)

        {
            arr[count]=i;
            count++;
        }
    }

    for(int j=1; j<count; j++)
    {
        cout<<arr[j]<<" ";
    }


    return 0;






}
