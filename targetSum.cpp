#include <iostream>
#include <vector>
using namespace std;
int solve(vector<vector<int>> &dp, vector<int> &nums, int target, int idx)
{
    if (idx == nums.size())
    {
        if (target == 0)
            return 1;
        return 0;
    }
    if (dp[idx][target] != -1)
    {
        return dp[idx][target];
    }
    int take = 0;
    if (target >= nums[idx])
        take = solve(dp, nums, target - nums[idx], idx + 1);
    int nottake = solve(dp, nums, target, idx + 1);
    return dp[idx][target] = take + nottake;
}
int findTargetSumWays(vector<int> &nums, int target)
{
    int n = nums.size();
    int sum_total = 0;
    for (int i = 0; i < n; i++)
    {
        sum_total += nums[i];
    }
    int new_target = (target + sum_total);
    if (new_target % 2 != 0 || new_target < 0)
    {
        return 0;
    }
    new_target /= 2;
    vector<vector<int>> dp(n + 1, vector<int>(new_target + 1, -1));
    if (target > sum_total)
    {
        return 0;
    }
    if (n == 1)
    {
        if (target == nums[0] || target == (-1 * nums[0]))
        {
            return 1;
        }
        return 0;
    }
    return solve(dp, nums, new_target, 0);
}

int main()
{
    return 0;
}