// remove a element from the array by a given value
#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val)
{
    int k = 0;
    for (int i = 0; i<nums.size(); i++)
    {
        if(nums[i] != val)
        {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}

int main()
{
    vector<int> nums;
    nums.push_back(5);
    nums.push_back(5);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(3);

    int k = removeElement(nums,5);

    for(int i = 0;i<k;i++)
    {
        cout<< nums[i]<<" ";
    }
}