#include <iostream>
#include <vector>
using namespace std;

pair<int, int> firstLastPair(const vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    return make_pair(matrix[0][0], matrix[rows - 1][cols - 1]);
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    pair<int, int> firstLast = firstLastPair(matrix);
    
    cout << "First element: " << firstLast.first << endl;
    cout << "Last element: " << firstLast.second << endl;
    
    return 0;
}
