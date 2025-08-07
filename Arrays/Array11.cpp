// detect the duplicates in the array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//brute-force concept
bool containsDuplicate_brute(vector<int>& nums) 
{
    for(int i = 0; i<((nums.size())-1);i++)
    {
        for(int j = i+1; j<nums.size();j++)
        {
            if(nums[i]==nums[j])
            {
                return true;
            }
        }
    }
   return false; 
}


// efficent logic 
bool containsDuplicate(vector<int>& nums) 
{
    sort(nums.begin(),nums.end());
    for(int i = 1; i<nums.size();i++)
    {
        if(nums[i]==nums[i-1])
        {
            return true;
        }
    }
   return false; 
}

int main()
{
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(5);

    bool result = containsDuplicate(nums);

    cout<<result;
}