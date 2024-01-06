#include <iostream>
#include <vector>

using namespace std;


int main()
{
    vector<int> vec1;
    int n,ele;

    cout<<"Enter the number of elements: "<<endl;
    cin>>n;


    for(int i=0;i<n;i++)//taking input
    {
        cout<<"Please Enter the elements no: "<<i+1<<endl;
        cin>>ele;
        vec1.push_back(ele);
    }

    cout<<"The elements are: ";
    for(int i=0;i<n;i++)//print elements
    {
     cout<<vec1[i]<<" ";
    }

    return 0;
}


