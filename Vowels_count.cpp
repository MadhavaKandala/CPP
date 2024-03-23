#include <iostream>
#include <string>
using namespace std;

int countVowels(const string& str) {
    int count = 0;
    for (char ch : str) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    return count;
}

int main() {
    string str = "Hello, world! This is a test string.";
    
    int vowelsCount = countVowels(str);
    
    cout << "Number of vowels: " << vowelsCount << endl;
    
    return 0;
}
