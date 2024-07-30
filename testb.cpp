#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> num;
        int temp = 0;
        for (int i = 0; i < image.size(); i++) {
            vector<int> sol;
            int x = image[i].size() - 1;
            for (int j = 0; j < image[i].size(); j++) {
                temp = image[i][x];
                if (temp == 0) {
                    temp = 1;
                } else {
                    temp = 0;
                }
                sol.push_back(temp);
                x--;
            }
            num.push_back(sol);
        }
        return num;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> image = {
      {1, 1, 0},
        {1, 0, 1},
        {0, 0, 0}
    };  // Example input
    vector<vector<int>> result = solution.flipAndInvertImage(image);

    cout << "Flipped and inverted image:" << endl;
    for (const auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
