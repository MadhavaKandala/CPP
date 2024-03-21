#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int countWords(const string& str) {
    stringstream ss(str);
    string word;
    int count = 0;
    
    while (ss >> word) {
        count++;
    }
    return count;
}

int main() {
    string str = "Hello, world! This is a test string.";
    
    int wordCount = countWords(str);
    
    cout << "Number of words: " << wordCount << endl;
    
    return 0;
}
