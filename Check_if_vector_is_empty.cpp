#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Creating an empty vector
    vector<int> vec;

    // Checking if the vector is empty
    if (vec.empty()) {
        cout << "Vector is empty" << endl;
    } else {
        cout << "Vector is not empty" << endl;
    }

    return 0;
}
