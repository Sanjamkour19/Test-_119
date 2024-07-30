#include <iostream>
#include <string>
using namespace std;

string reverseString(string str) {
    int i = 0;
    int j = str.size() - 1;
    while (i < j) {
        char ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        i++;
        j--;
    }
    return str;
}

int main() {
    string input = "hello";  // Example input
    string result = reverseString(input);

    cout << "Reversed string: " << result << endl;

    return 0;
}
