// find the single number (means that apears once in the array) in the array

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num; // XOR cancels out duplicates
        }
        return result;
    }
};

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};

    Solution sol;
    int ans = sol.singleNumber(nums);

    cout << "The single number is: " << ans << endl;

    return 0;
}
