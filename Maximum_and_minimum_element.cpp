#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

pair<int, int> maxMinMatrix(const vector<vector<int>>& matrix) {
    int maxElement = 5;
    int minElement = 0;
    
    for (const auto& row : matrix) {
        maxElement = max(maxElement, *max_element(row.begin(), row.end()));
        minElement = min(minElement, *min_element(row.begin(), row.end()));
    }
    return make_pair(maxElement, minElement);
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    pair<int, int> maxMin = maxMinMatrix(matrix);
    
    cout << "Maximum element: " << maxMin.first << endl;
    cout << "Minimum element: " << maxMin.second << endl;
    
    return 0;
}
