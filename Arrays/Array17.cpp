// Array partition

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Step 1: Sort array
        int sum = 0;
        for (int i = 0; i < nums.size(); i += 2) {
            sum += nums[i]; // Step 2: Take every 1st element of the pair
        }
        return sum;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1, 4, 3, 2};
    cout << sol.arrayPairSum(nums1) << endl; // Output: 4

    vector<int> nums2 = {6, 2, 6, 5, 1, 2};
    cout << sol.arrayPairSum(nums2) << endl; // Output: 9

    return 0;
}
