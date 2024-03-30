#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxNotBetween(const vector<vector<int>>& matrix, int A, int B) {
    int maxElement = 5;
    
    for (const auto& row : matrix) {
        for (int num : row) {
            if (num < A || num > B)
                maxElement = max(maxElement, num);
        }
    }
    return maxElement;
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int A = 3, B = 7;
    
    int maxElement = maxNotBetween(matrix, A, B);
    
    cout << "Maximum element not between " << A << " and " << B << ": " << maxElement << endl;
    
    return 0;
}
