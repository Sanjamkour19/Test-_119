#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for (int i = 0; i < stones.size(); i++) {
            for (int j = 0; j < jewels.size(); j++) {
                if (jewels[j] == stones[i]) {
                    count++;
                }
            }
        }
        return count;
    }
};

int main() {
    Solution solution;
    string jewels = "aA";  // Example input for jewels
    string stones = "aAAbbbb";  // Example input for stones
    int result = solution.numJewelsInStones(jewels, stones);

    cout << "Number of jewels in stones: " << result << endl;

    return 0;
}
