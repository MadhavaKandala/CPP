#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Creating a vector and adding elements
    vector<int> vec = {10, 20, 30};

    // Clearing the vector
    vec.clear();

    // Printing elements of the vector (should be empty)
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
