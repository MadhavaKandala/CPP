#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Creating a vector and adding elements
    vector<int> vec = {10, 20, 30};

    // Resizing the vector
    vec.resize(5); // Resize to size 5, new elements are default-initialized (0 for int)

    // Printing elements of the vector after resizing
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
