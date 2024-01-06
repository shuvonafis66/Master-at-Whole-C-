#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n, ele;

    cout << "Please Enter the size of vector: ";
    cin >> n;

    vector<int> vec1;

    for (int i = 0; i < n; i++) // taking input from user
    {
        cout << "Enter the element no: " << i + 1 << "- ";
        cin >> ele;
        vec1.push_back(ele);
    }

    cout << "The elements are: "; // Printing elements

    for (int i = 0; i < n; i++) {
        cout << vec1[i] << " ";
    }

    // Assign a new value
    vec1.at(2) = 303;

    int x = vec1.size();

    // Printing Updated Vector
    cout << endl;
    cout << "The updated Elements are: ";

    for (int i = 0; i < x; i++) { // Use 'x' instead of 'n' here
        cout << vec1[i] << " ";
    }

    return 0;
}

