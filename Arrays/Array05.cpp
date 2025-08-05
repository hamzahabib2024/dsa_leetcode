// 922. Sort Array By Parity II

#include <iostream>
#include <vector>
using namespace std;

vector<int> sortArrayByParityII(vector<int>& nums) 
{
    vector<int> numsB(nums.size());
    int j = 0;
    int k =1;
    for (int i = 0; i<nums.size(); i++)
    {
        if(nums[i] %2 ==0)
        {
            numsB[j] = nums[i];
            j +=2;
        }
        if(nums[i]%2 == 1)
        {
            numsB[k] = nums[i];
            k +=2;
        }
    }
    return numsB;
    
}

int main()
{
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(6);
    nums.push_back(6);

    vector<int> k = sortArrayByParityII(nums);

    for(int i = 0;i<k.size();i++)
    {
        cout<< k[i]<<" ";
    }
}