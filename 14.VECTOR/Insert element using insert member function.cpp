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

int x,y;

cout<<"Enter the element you want to insert: ";
cin>>x;
cout<<"Enter the postion you want to insert: ";
cin>>y;

  vector1.insert(vector1.begin()+y-1,200);



    //Print updated elements
    cout<<"The updated elements are: ";

    for(auto it=vector1.begin();it!=vector1.end();it++)
    {
        cout<<*it<<" ";


    }



    return 0;
}



