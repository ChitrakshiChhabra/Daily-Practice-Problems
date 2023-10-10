#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minOperations(vector<int> &nums)
{
    int length = nums.size();
    int minOperations = length;
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    int right = 0;

    for (int left = 0; left < nums.size(); left++)
    {
        while (right < nums.size() && nums[right] < nums[left] + length)
        {
            right++;
        }

        minOperations = min(minOperations, length - (right - left));
    }

    return minOperations;
}

int main()
{
    return 0;
}