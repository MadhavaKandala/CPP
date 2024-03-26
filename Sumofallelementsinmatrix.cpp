#include <iostream>
#include <vector>
using namespace std;

int sumAllElements(const vector<vector<int>>& matrix) {
    int sum = 0;
    
    for (const auto& row : matrix) {
        for (int num : row) {
            sum += num;
        }
    }
    return sum;
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    int sum = sumAllElements(matrix);
    
    cout << "Sum of all elements: " << sum << endl;
    
    return 0;
}
