#include <iostream>
#include<vector>

using namespace std;

int main()

{
    vector<int> vector1;
    int n,ele,newelement,newposition;

    cout<<"Enter the number of elements: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter element No: "<<i+1<<": ";
        cin>>ele;

        vector1.push_back(ele);
    }

    //Before Updating..

    cout<<"The elements are: ";
    for(int i=0;i<n;i++)
    {
        cout<<vector1[i]<<" ";
    }

    cout<<endl;
    cout<<"Enter the new element: "<<endl;
    cin>>newelement;

    cout<<"Enter the the position of assigning new value"<<endl;
    cin>>newposition;

    if(newposition>0 && newposition<n)
    {
        vector1.at(newposition-1)=newelement;



    cout<<endl;
    cout<<"The updated elements are: ";

    for(int i=0;i<n;i++)
    {
        cout<<vector1[i]<<" ";
    }
    }

    else
    {
        cout<<" Invalid Position";

    }



    return 0;



}
