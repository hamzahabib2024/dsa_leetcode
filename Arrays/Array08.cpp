// find weather the array is Monotonic or not

#include <iostream>
#include <vector>
using namespace std;



bool isMonotonic(vector<int>& nums) 
{
    int i = 0, j = 1;
    while(j<nums.size()&& nums[i]==nums[j])
    {
        i++; j++;
    }
    if(j==nums.size())return true;
    if(nums[i]<nums[j])
    {
        while(j<nums.size())
        {
            if (nums[i]<= nums[j])
            {
                i++; j++;
            }
            else
            return false;
        }
    }
    else
    {
        while(j<nums.size())
        {
            if (nums[i]>= nums[j])
            {
                i++; j++;
            }
            else
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(4);
    nums.push_back(5);

    bool result = isMonotonic(nums);

    cout<< result;
}