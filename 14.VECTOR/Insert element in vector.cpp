//insert element at the last of the vector


#include<iostream>
#include<vector>


using namespace std;


int main()
{
    int n,ele;

    cout<<"Enter how many elements you want to store: ";
    cin>>n;

    vector<int>vector1;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the elements No: "<<i+1<<": ";
        cin>>ele;
        vector1.push_back(ele);

    }

    //Before Updating the vector

    cout<<"The elemenets are";
    for(int i=0;i<vector1.size();i++)

    {
        cout<<vector1[i]<<" ";
    }

    cout<<endl;

    int x,y;

    cout<<"Enter element to insert into the vector: ";
    cin>>x>>y;



    vector1.emplace_back(x);
    vector1.emplace_back(y);

    //  Afrer  Updating the vector

    cout<<"After Updating The elemenets are: ";
    for(int i=0;i<vector1.size();i++)

    {
        cout<<vector1[i]<<" ";
    }

    return 0;


}
