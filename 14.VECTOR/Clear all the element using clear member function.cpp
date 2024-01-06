#include<iostream>
#include<vector>


using namespace std;

int main()

{
    vector<int>vector1;

    int n,ele;
    cout<<"Enter How many elements you want to store: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the elements No "<<i+1<<": ";
        cin>>ele;
        vector1.push_back(ele);
    }

//Printing the vector
//Before using clear member function


    cout<<"The elements are: ";

    for(auto it=vector1.begin();it!=vector1.end();it++)
    {
        cout<<*it<<" ";


    }
cout<<endl;

    //Clear all the elements

    vector1.clear();

    int x,y;

    cout<<"New two elements you want to insert: ";
    cin>>x>>y;


    vector1.push_back(x);
    vector1.push_back(y);


    cout<<endl;




    //Print updated elements
    cout<<"After clear the updated elements are: ";

    for(auto it=vector1.begin();it!=vector1.end();it++)
    {
        cout<<*it<<" ";


    }



    return 0;
}


