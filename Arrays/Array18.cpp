// sort array by increasing fequency

#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        // Frequency array for range [-100, 100]
        int freq[201] = {0};  

        // Count frequencies
        for (int n : nums) {
            freq[n + 100]++;   // shift index by +100
        }

        // Sort with custom comparator
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            int fa = freq[a + 100];
            int fb = freq[b + 100];
            if (fa == fb) return a > b; // higher value first if same frequency
            return fa < fb; // lower frequency first
        });

        return nums;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {1,1,2,2,2,3};
    vector<int> res1 = sol.frequencySort(nums1);
    for (int x : res1) cout << x << " ";
    cout << endl;

    vector<int> nums2 = {2,3,1,3,2};
    vector<int> res2 = sol.frequencySort(nums2);
    for (int x : res2) cout << x << " ";
    cout << endl;

    vector<int> nums3 = {-1,1,-6,4,5,-6,1,4,1};
    vector<int> res3 = sol.frequencySort(nums3);
    for (int x : res3) cout << x << " ";
    cout << endl;
}
