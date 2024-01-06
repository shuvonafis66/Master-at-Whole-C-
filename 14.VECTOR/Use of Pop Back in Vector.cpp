
//Remove last to elements of Vector.

#include<iostream>
#include<vector>

using namespace std;

int main()

{
    vector<int>vec1={1,2,3,6,2,4,2,4,10};


    vec1.pop_back();
    vec1.pop_back();

    int n=vec1.size();

    cout<<"The new elements of vectors are: ";

    for(int i=0;i<n;i++)
    {
        cout<<vec1[i]<<" ";
    }

    return 0;
    }
