//Reverse Vector.....
#include<iostream>

#include<vector>

using namespace std;

int main()

{
    int n,ele;
    vector<int>vector1;

    cout<<"Enter the number of elements: ";
    cin>>n;



    for(int i=0; i<n; i++)
    {
        cout<<"Enter the elements no "<<i+1<<": ";
        cin>>ele;
        vector1.push_back(ele);
    }

    //Printing the elements......

    cout<<"The elements are: ";
    for(auto it=vector1.begin();it!=vector1.end();it++)
    {
        cout<<*it<<" ";
    }


    //Reverse Vector
      cout<<"The reverse elements are: ";
    for(auto it=vector1.rbegin();it!=vector1.rend();it++)
    {
        cout<<*it<<" ";
    }
 return 0;

}

