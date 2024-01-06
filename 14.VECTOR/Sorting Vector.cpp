//Erase Duplicate element form vector

#include<iostream>
#include <vector>
#include<algorithm>


using namespace std;

int main()
{

    int ele,n;
    vector<int>vector1;

    cout<<"Enter the number of elements of the vector: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element No "<<i+1<<" :";
        cin>>ele;
        vector1.push_back(ele);//add element
    }

    cout<<endl;
    cout<<"The elements of the vectors are: ";

for(int i=0;i<vector1.size();i++)
{
    cout<<vector1[i]<<" ";
}

sort(vector1.begin(),vector1.end());

cout<<endl;
cout<<"After sorting Updated Vector is: ";

for(int i=0;i<vector1.size();i++)
{
    cout<<vector1[i]<<" ";
}


    return 0;
}









