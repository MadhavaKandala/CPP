#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Creating two vectors and adding elements
    vector<int> vec1 = {1, 2, 3};
    vector<int> vec2 = {4, 5, 6};

    // Swapping the contents of the vectors
    vec1.swap(vec2);

    // Printing elements of the vectors after swapping
    cout << "Vector 1 after swapping: ";
    for (int num : vec1) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Vector 2 after swapping: ";
    for (int num : vec2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
