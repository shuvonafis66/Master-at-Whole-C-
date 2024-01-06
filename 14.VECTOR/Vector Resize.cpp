//Vector Resizing....



#include<iostream>
#include<vector>

using namespace std;

int main()


{
    vector<int>vector1;


    int n;

    cout<<"Enter How many elements you want to store on that vector: ";
    cin>>n;


    for(int i=1;i<=n;i++)


        vector1.push_back(i);

        //Printing the elements of the vector before resizing


        cout<<"The elements of the vector before resizing are: ";


        for(int i=0;i<vector1.size();i++)

        {
            cout<<vector1[i]<<" ";
        }



        vector1.resize(5);
  vector1.resize(8,100);
vector1.resize(12);

//The vector.resize() function in C++ is used to change the size of a vector. It takes two parameters:..The new size of the vector.The value to initialize new elements with, if the vector is resized to a larger size.
//Printing the elements of the vector after resizing

        cout<<"\nThe elements of the vector before resizing are: ";


        for(int i=0;i<vector1.size();i++)

        {
            cout<<vector1[i]<<" ";
        }




}





