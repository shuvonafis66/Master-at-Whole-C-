#include<iostream>
#include<vector>


using namespace std;

int main() {
    vector<int> foo(5, 200);
    vector<int> soo(6, 300);

    swap(soo,foo);

    // Printing foo elements
    cout << "The elements of foo are: "; // Corrected the output message

    for (auto it = foo.begin(); it != foo.end(); it++) {
        cout << *it << " ";
    }

    // Printing soo elements
    cout << "\nThe elements of soo are: "; // Corrected the output message

    for (auto it = soo.begin(); it != soo.end(); it++) {
        cout << *it << " ";
    }

    return 0; // Added a return statement
}
