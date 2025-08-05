// 905. sort array by parity means that sort the array in such a way that half array is odd and half is even

#include <iostream>
#include <vector>
using namespace std;

vector<int> sortArrayByParity(vector<int>& nums)
{
    vector<int> numsB(nums.size());
    int k = 0;
    for (int i = 0; i<nums.size(); i++)
    {
        if(nums[i] %2 ==0)
        {
            numsB[k] = nums[i];
            k++;
        }
    }
    for (int i = 0; i<nums.size(); i++)
    {
        if(nums[i] %2 !=0)
        {
            numsB[k] = nums[i];
            k++;
        }
    }
    return numsB;
}
vector<int> sortArrayByParityEfficiently(vector<int>& nums) //it is efficient but gives unordered array
{
    int i = 0;
    int j = nums.size()-1;

    while(i<j)
    {
        if(nums[i]%2 > nums[j]%2)
        {
            swap(nums[i],nums[j]);
        }
        if (nums[i]%2 == 0)
        i++;
        if (nums[j]%2 == 1)
        j--;
    }
    return nums;
}

int main()
{
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(6);

    vector<int> k = sortArrayByParity(nums);

    for(int i = 0;i<k.size();i++)
    {
        cout<< k[i]<<" ";
    }
}