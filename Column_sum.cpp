#include <iostream>
#include <vector>
using namespace std;

vector<int> columnWiseSum(const vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    vector<int> sums(cols, 0);
    
    for (int j = 0; j < cols; ++j) {
        for (int i = 0; i < rows; ++i) {
            sums[j] += matrix[i][j];
        }
    }
    return sums;
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    vector<int> sums = columnWiseSum(matrix);
    
    for (int sum : sums) {
        cout << sum << " ";
    }
    cout << endl;
    
    return 0;
}
