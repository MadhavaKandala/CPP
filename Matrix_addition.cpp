#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> matrixAddition(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int rows = A.size();
    int cols = A[0].size();
    
    vector<vector<int>> result(rows, vector<int>(cols));
    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
    return result;
}

int main() {
    vector<vector<int>> A = {{1, 2}, {3, 4}};
    vector<vector<int>> B = {{5, 6}, {7, 8}};
    
    vector<vector<int>> result = matrixAddition(A, B);
    
    for (const auto& row : result) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}
