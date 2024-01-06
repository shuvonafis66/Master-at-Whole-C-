#include<iostream>
#include<vector>

using namespace std;
int main()

{
    int n,ele,i=0,sum=0;

    cout<<"Enter the number of element you want to store: ";
    cin>>n;


    vector<int>vector1;


    for(i=0; i<n; i++)
    {
        cout<<"Enter the element No: "<<i+1<<": ";
        cin>>ele;
        vector1.push_back(ele);
    }

    //Printing the vector

    cout<<"The elements of the vectors are: ";


    for(i=0;i<n;i++)
    {
        cout<<vector1[i]<<" ";
    }


    cout<<endl;

    while(!vector1.empty())

    {
        vector1.pop_back();
    }

    for(i=0;i<vector1.size();i++)

    {
        sum=sum+vector1[i];
    }

    cout<<"The sum of the totat element is: "<<sum;

    return 0;

}
