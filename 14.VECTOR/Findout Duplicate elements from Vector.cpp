//Print Duplicate elements from vector

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,ele,count=0;
    vector<int>vector1;
    vector<int>vector2;
    cout<<"How manu elements you want to store: ";
    cin>>n;

    for(int i=0;i<n;i++)

    {
        cout<<"Enter the elements No "<<i+1<<" ";
        cin>>ele;
        vector1.push_back(ele);
    }

    //Printing the elements of new vector


    cout<<"The elements are: ";


    for(auto it=vector1.begin();it!=vector1.end();it++)

    {
        cout<<*it<<" ";
    }


    //Sorting the vector..


    sort(vector1.begin(),vector1.end());


cout<<endl;



    for(int i=0;i<n;i++)

    {
        if(vector1[i]==vector1[i+1])

            vector2.push_back(vector1[i]);
    }


//Print the duplicate elements



cout<<"\nThe Duplicate elements are: ";


    for(auto it=vector2.begin();it!=vector2.end();it++)

    {
        cout<<*it<<" ";
    }

    return 0;

}



