#include <vector>
#include <iostream>

std::vector<int> twoSum(std::vector<int> &nums, int target)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                return {i, j};
            }
        }
    }
    return {};
}

int main()
{
    std::vector<int> vector = {2,7,11,15};
    std::vector<int> sayilar;
    sayilar = twoSum(vector,9);
    for(auto& i : sayilar)
     {
        std::cout<<i;
     }
}