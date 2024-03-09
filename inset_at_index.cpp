#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Creating a vector and adding elements
    vector<int> vec = {10, 20, 30};

    // Inserting elements at specific positions
    vec.insert(vec.begin() + 1, 15); // Insert 15 at index 1

    // Printing elements of the vector
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
// 9 // 13