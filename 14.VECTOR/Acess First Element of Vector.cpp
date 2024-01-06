//Access The First Element
//Access The last element.

#include<iostream>
#include <vector>


using namespace std;

int main()
{

    int ele,n;
    vector<int>vector1;

    cout<<"Enter the number of elements of the vector: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element No "<<i+1<<" :";
        cin>>ele;
        vector1.push_back(ele);//add element
    }



    cout<<"The first element of the vector is: "<<vector1.front()<<" "<<endl;//Access first element
    cout<<"The last element of the vector is: "<<vector1.back()<<" ";//Access the last element


    return 0;
}
