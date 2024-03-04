#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Creating a vector and adding elements
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // Printing elements of the vector
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
