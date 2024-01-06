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


    //Printing size, capacity,max_size

    cout<<"The size is : "<<vector1.size()<<endl;
    cout<<"The capacity is : "<<vector1.capacity()<<endl;
    cout<<"The max_size is: "<<vector1.max_size()<<endl;
    return 0;
}


