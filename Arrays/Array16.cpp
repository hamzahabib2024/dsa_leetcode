// shuffling of the array

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;
        result.reserve(2 * n);  //here we will Reserve space for efficiency
        
        for (int i = 0; i < n; i++) {
            result.push_back(nums[i]);     // take xi
            result.push_back(nums[i + n]); // take yi
        }
        
        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2,5,1,3,4,7};
    int n = 3;

    vector<int> ans = sol.shuffle(nums, n);
    
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
