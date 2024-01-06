#include <iostream>
#include <vector>
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

    vector<int>vector2;//Declare a new vector for storing unique elements


    //Copy Unique element on a new vector...


    for(int i=0;i<n;i++)

    {
        if(vector1[i]!=vector1[i+1])


        {
            vector2.push_back(vector1[i]);
        }
    }

    //Printing the updated  vector

cout<<endl;

    cout<<"The uique elements of the vector are: ";


    for(auto it=vector2.begin();it!=vector2.end();it++)


    {
        cout<<*it<<" ";
    }

    return 0;




}
