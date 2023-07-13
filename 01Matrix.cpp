#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<vector<int>> updateMatrix(vector<vector<int>> &mat)
{
    queue<pair<pair<int, int>, int>> q;
    int n = mat.size();
    int m = mat[0].size();

    vector<vector<int>> vis(n, vector<int>(m, 0));
    vector<vector<int>> ans = vis;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == 0)
            {
                vis[i][j] = 1;
                q.push({{i, j}, 0});
            }
        }
    }

    while (!q.empty())
    {
        int x = q.front().first.first;
        int y = q.front().first.second;
        int dis = q.front().second;
        q.pop();
        ans[x][y] = dis;

        vector<int> delR = {-1, 0, 1, 0};
        vector<int> delC = {0, 1, 0, -1};

        for (int i = 0; i < 4; i++)
        {
            int nx = x + delR[i];
            int ny = y + delC[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m)
            {
                if (vis[nx][ny] == 0 && mat[nx][ny] == 1)
                {
                    vis[nx][ny] = 1;
                    q.push({{nx, ny}, dis + 1});
                }
            }
        }
    }

    return ans;
}
int main()
{
    return 0;
}