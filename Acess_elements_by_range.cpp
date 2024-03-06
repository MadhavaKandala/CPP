#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Creating a vector and adding elements
    vector<int> vec = {10, 20, 30};

    // Accessing elements of the vector using range-based for loop
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
