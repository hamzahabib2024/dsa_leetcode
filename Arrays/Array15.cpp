// create target array in the given order

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target;
        for (int i = 0; i < nums.size(); i++) {
            target.insert(target.begin() + index[i], nums[i]);
        }
        return target;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {0,1,2,3,4};
    vector<int> index = {0,1,2,2,1};
    vector<int> result = sol.createTargetArray(nums, index);

    cout << "Output: [";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) cout << ",";
    }
    cout << "]" << endl;

    return 0;
}
