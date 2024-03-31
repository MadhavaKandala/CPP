#include<bits/stdc++.h>

using namespace std;

vector<int> evenOddPattern(const vector<vector<int>>& matrix) {
    vector<int> result;
    
    for (const auto& row : matrix) {
        for (int num : row) {
            if (num % 2 == 0)
                result.push_back(num);
        }
    }
    
    for (const auto& row : matrix) {
        for (int num : row) {
            if (num % 2 != 0)
                result.push_back(num);
        }
    }
    
    return result;
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    vector<int> result = evenOddPattern(matrix);
    
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
