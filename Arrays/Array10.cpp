// move zeros to the end of the array

#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) 
{
    int x = 0;
    for (int i = 0; i<nums.size();i++)
    {
        if(nums[i] != 0)
        {
            nums[x] = nums[i];
            x++;
        }
    }
    while(x<nums.size())
    {
        nums[x] = 0;
        x++;
    } 
}

int main()
{
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(5);

    moveZeroes(nums);

    for(int i = 0;i<nums.size();i++)
    {
        cout<< nums[i]<<" ";
    }
}