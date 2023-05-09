#include <iostream>
#include <vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int i = 0, j = 0, r = matrix.size() - 1, c = matrix[0].size() - 1;
    int product = matrix.size() * matrix[0].size();
    int ps = -1;
    vector<int> ans;
    while (ans.size() < product && ps != ans.size())
    {
        ps = ans.size();
        int firstR = i, firstC = j;
        while (j < c)
        {
            ans.push_back(matrix[i][j]);
            j++;
        }
        while (i < r)
        {
            ans.push_back(matrix[i][j]);
            i++;
        }
        while (j > firstC)
        {
            ans.push_back(matrix[i][j]);
            j--;
            if (r == firstR)
                break;
        }
        while (i > firstR)
        {
            ans.push_back(matrix[i][j]);
            i--;
            if (c == firstC)
                break;
        }
        i++;
        j++;
        r--;
        c--;
    }
    if (ans.size() < product)
    {
        int m = matrix.size();
        ans.push_back(matrix[m / 2][m / 2]);
    }
    return ans;
}
int main()
{
    return 0;
}