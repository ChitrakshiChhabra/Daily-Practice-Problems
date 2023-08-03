#include <iostream>
#include <vector>
using namespace std;

int fun(int n, vector<int> &dp)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    if (dp[n] > -1)
        return dp[n];
    else
        return dp[n] = fun(n - 1, dp) + fun(n - 2, dp);
}
int climbStairs(int n)
{
    vector<int> dp(n + 1, -1);
    return fun(n, dp);
}

int main()
{
    return 0;
}