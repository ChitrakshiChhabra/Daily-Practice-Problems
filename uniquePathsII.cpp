#include <iostream>
#include <vector>
using namespace std;

int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
{
    int n = obstacleGrid.size();
    int m = obstacleGrid[0].size();
    vector<int> dp(m, 0);
    int prev = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (obstacleGrid[i][j] == 1)
                dp[j] = 0;
            else if (i == 0 && j == 0)
                dp[j] = 1;
            else
                dp[j] = prev + dp[j];
            prev = dp[j];
        }
        prev = 0;
    }
    return dp[m - 1];
}
int main()
{
    return 0;
}