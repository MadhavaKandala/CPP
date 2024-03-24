#include <iostream>
#include <vector>
using namespace std;

vector<int> rowWiseSum(const vector<vector<int>>& matrix) {
    vector<int> sums;
    
    for (const auto& row : matrix) {
        int rowSum = 0;
        for (int num : row) {
            rowSum += num;
        }
        sums.push_back(rowSum);
    }
    return sums;
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    vector<int> sums = rowWiseSum(matrix);
    
    for (int sum : sums) {
        cout << sum << " ";
    }
    cout << endl;
    
    return 0;
}
