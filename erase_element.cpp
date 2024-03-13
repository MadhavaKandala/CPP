#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Creating a vector and adding elements
    vector<int> vec = {10, 20, 30};

    // Erasing elements from the vector
    vec.erase(vec.begin() + 1); // Erase element at index 1

    // Printing elements of the vector
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
