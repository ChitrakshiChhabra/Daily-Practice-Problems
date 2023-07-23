#include <iostream>
#include <vector>
using namespace std;

int fun(vector<int> &heights, vector<int> &dp, int index)
{
    if (index == 0)
        return 0;
    if (dp[index] != -1)
        return dp[index];

    int left = fun(heights, dp, index - 1) + abs(heights[index] - heights[index - 1]);
    int right = INT_MAX;
    if (index > 1)
        right = fun(heights, dp, index - 2) + abs(heights[index] - heights[index - 2]);

    return dp[index] = min(left, right);
}
int frogJump(int n, vector<int> &heights)
{
    vector<int> dp(n, -1);
    return fun(heights, dp, n - 1);
}

int main()
{
    return 0;
}