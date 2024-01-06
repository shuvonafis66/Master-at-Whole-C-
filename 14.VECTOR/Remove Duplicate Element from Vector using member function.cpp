#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,ele;

    cout<<"Enter How many elements you want to store: ";
    cin>>n;

    vector<int>vector1;


    for(int i=0;i<n;i++)//Taking input from user
    {
        cout<<"Enter the elements No "<<i+1<<": ";
        cin>>ele;
        vector1.push_back(ele);
    }

    //Printing the vector

    cout<<"The elements are: ";

    for(auto it=vector1.begin();it!=vector1.end();it++)


    {
        cout<<*it<<" ";
    }


    sort(vector1.begin(),vector1.end());



    cout<<endl;
    //Print the new vector after sorting.....

    cout<<"The sorted vector is: ";
    for(auto it=vector1.begin();it!=vector1.end();it++)
    {
        cout<<*it<<" ";
    }


    cout<<endl;


    //Remove the duplicate elements


    vector1.erase(unique(vector1.begin(),vector1.end()));

     //Print the new vector after sorting.....

    cout<<"The uniuqe vector is: ";
    for(auto it=vector1.begin();it!=vector1.end();it++)
    {
        cout<<*it<<" ";
    }


    return 0;


}
