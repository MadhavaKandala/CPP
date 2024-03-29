#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int countElementsSameAsCount(const vector<vector<int>>& matrix) {
    unordered_map<int, int> freq;
    
    for (const auto& row : matrix) {
        for (int num : row) {
            freq[num]++;
        }
    }
    
    int count = 0;
    for (const auto& entry : freq) {
        if (entry.first == entry.second)
            count++;
    }
    return count;
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {2, 2, 6}, {7, 7, 9}};
    
    int count = countElementsSameAsCount(matrix);
    
    cout << "Number of elements same as count: " << count << endl;
    
    return 0;
}
