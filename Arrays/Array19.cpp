// maximum product of the two elements in an array

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = 0, max2 = 0; // two largest numbers

        for (int num : nums) {
            if (num > max1) {
                max2 = max1;
                max1 = num;
            } else if (num > max2) {
                max2 = num;
            }
        }

        return (max1 - 1) * (max2 - 1);
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {3,4,5,2};
    vector<int> nums2 = {1,5,4,5};
    vector<int> nums3 = {3,7};

    cout << sol.maxProduct(nums1) << endl; // 12
    cout << sol.maxProduct(nums2) << endl; // 16
    cout << sol.maxProduct(nums3) << endl; // 12

    return 0;
}
