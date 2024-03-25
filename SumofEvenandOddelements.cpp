#include <iostream>
#include <vector>
using namespace std;

pair<int, int> sumEvenOdd(const vector<vector<int>>& matrix) {
    int evenSum = 0, oddSum = 0;
    
    for (const auto& row : matrix) {
        for (int num : row) {
            if (num % 2 == 0)
                evenSum += num;
            else
                oddSum += num;
        }
    }
    return make_pair(evenSum, oddSum);
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    pair<int, int> sums = sumEvenOdd(matrix);
    
    cout << "Sum of even elements: " << sums.first << endl;
    cout << "Sum of odd elements: " << sums.second << endl;
    
    return 0;
}
