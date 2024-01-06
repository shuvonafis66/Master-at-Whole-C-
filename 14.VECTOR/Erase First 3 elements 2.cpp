//Erase First 3 Element from Vector
#include<iostream>
#include <vector>


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

for(int i=0;i<3;i++)

{
    vector1.erase(vector1.begin());
}




cout<<"After Erassing Updated Vector is: ";

for(int i=0;i<vector1.size();i++)
{
    cout<<vector1[i]<<" ";
}


    return 0;
}




