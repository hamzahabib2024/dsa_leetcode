// Find the middle index in the  array

#include <iostream>
#include <vector>
using namespace std;

int findMiddleIndex(vector<int>& nums) {
    int totalSum = 0;
    for (int num : nums) totalSum += num;  // sum of all elements
    
    int leftSum = 0;
    for (int i = 0; i < nums.size(); i++) {
        int rightSum = totalSum - leftSum - nums[i]; // remaining sum on the right
        if (leftSum == rightSum) return i; // found the leftmost middle index
        leftSum += nums[i];
    }
    return -1; // no middle index found
}

int main() {
    vector<int> nums = {2, 3, -1, 8, 4};
    cout << findMiddleIndex(nums) << endl; // Output: 3
    
    vector<int> nums2 = {1, -1, 4};
    cout << findMiddleIndex(nums2) << endl; // Output: 2
    
    vector<int> nums3 = {2, 5};
    cout << findMiddleIndex(nums3) << endl; // Output: -1
    
    return 0;
}
