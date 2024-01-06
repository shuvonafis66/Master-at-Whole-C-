#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()

{
    int n,ele;

    vector <int> vector1;
    cout<<"How many elements you want to store in vector: ";
    cin>>n;


    for(int i=0;i<n;i++)
    {
        cout<<"Enter the elements No "<<i+1<<": ";
        cin>>ele;
        vector1.push_back(ele);
    }

    cout<<endl;
    cout<<"The elements are: ";

    for(auto it=vector1.begin();it<vector1.end();it++)
    {
        cout<<*it<<" ";
    }

    auto maxele=max_element(vector1.begin(),vector1.end());

    cout<<"The max elements is: "<<*maxele;

    return 0;
}


