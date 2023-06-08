#include <iostream>
#include <vector>
using namespace std;

int countNegatives(vector<vector<int>> &grid)
{

    int count = 0;
    int m = grid.size(), n = grid[0].size();

    for (int i = 0; i < m; i++)
    {
        int j = n - 1;
        while (j >= 0 && grid[i][j] < 0)
        {
            count++;
            j--;
        }
    }
    return count;
}
int main()
{
    return 0;
}