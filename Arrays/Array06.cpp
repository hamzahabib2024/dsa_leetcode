//349.intersection of two arrays
// find the intersection element of the two arrays 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector<int> intersection(vector<int>& num1, vector<int>& num2)
{
    sort(num1.begin(),num1.end());
    sort(num2.begin(),num2.end());

    vector<int> result;
    int i = 0;
    int j = 0;
    while(i<num1.size()&& j<num2.size())
    {
        if(num1[i]==num2[j])
        {
            if(result.empty() || result.back() != num1[i])
            {
                result.push_back(num1[i]);
            }
            i++;j++;
        }
        else if (num1[i]<num2[j])
        {
            i++;
        }
        else
        j++;
    }
    return result;
}


int main()
{
    vector<int> num1;
    vector<int> num2;
    num1.push_back(1);
    num1.push_back(3);
    num1.push_back(5);
    num1.push_back(6);
    num1.push_back(7);
    num1.push_back(9);

    num2.push_back(2);
    num2.push_back(4);
    num2.push_back(6);
    num2.push_back(6);
    num2.push_back(8);
    num2.push_back(10);

    vector<int> k = intersection(num1,num2);

    for(int i = 0;i<k.size();i++)
    {
        cout<< k[i]<<" ";
    }
}