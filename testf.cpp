#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string sortSentence(string s) {
        istringstream iss(s);
        vector<pair<string, int>> words;
        string word;
        while (iss >> word) {
            int pos = word.back() - '0';  // Extract the position (last character)
            word.pop_back();  // Remove the position from the word
            words.push_back({word, pos});
        }

        sort(words.begin(), words.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
            return a.second < b.second;
        });

        stringstream result;
        for (const auto& p : words) {
            result << p.first << " ";
        }
        string sortedSentence = result.str();
        if (!sortedSentence.empty()) {
            sortedSentence.pop_back();  // Remove the trailing space
        }

        return sortedSentence;
    }
};

int main() {
    Solution solution;
    string input = "is2 sentence4 This1 a3";  // Example input
    string result = solution.sortSentence(input);

    cout << "Sorted sentence: " << result << endl;

    return 0;
}
