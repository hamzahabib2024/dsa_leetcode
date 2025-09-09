//Missing number

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n = nums.size();
        int expectedSum = n * (n + 1) / 2;
        int actualSum = 0;

        for (int num : nums) {
            actualSum += num;
        }

        return expectedSum - actualSum;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {3, 0, 1};
    vector<int> nums2 = {0, 1};
    vector<int> nums3 = {9,6,4,2,3,5,7,0,1};

    cout << sol.missingNumber(nums1) << endl;
    cout << sol.missingNumber(nums2) << endl;  
    cout << sol.missingNumber(nums3) << endl; 

    return 0;
}
