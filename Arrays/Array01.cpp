// 26. Remove the duplicates from the sorted array

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    public:
    int removeDuplicates(vector<int>& nums) 
    {
        if (nums.empty()) return 0;
        
        int k = nums.size();
        for (int i = 0; i<k; i++)
        {
            int j = i+1;
            while(nums[i] == nums[(j)])
            {
                if (nums[i] == nums[(j)])
                {
                    int l = j+1;
                    while (l<nums.size())
                    {
                        swap(nums[j], nums[l]);
                        j++;
                        l++;
                    }
                    k -= 1;
                    j = i+1;
                }
            }
        }
        return k;
    }
};

int main()
{
    Solution sol;
    vector<int> v;
    v = {1, 1, 1, 2, 3, 3, 3, 4, 4, 5};
    int num = sol.removeDuplicates(v);

    for (int i = 0; i<num ;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}