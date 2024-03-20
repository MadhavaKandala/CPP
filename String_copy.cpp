#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char source[] = "Hello, world!";
    char destination[20];
    
    strcpy(destination, source);
    
    cout << "Source string: " << source << endl;
    cout << "Copied string: " << destination << endl;
    
    return 0;
}
