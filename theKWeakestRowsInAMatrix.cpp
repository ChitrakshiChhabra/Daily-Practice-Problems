#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
{
    int m = mat.size();
    int n = mat[0].size();
    vector<pair<int, int>> strength;
    for (int i = 0; i < m; i++)
    {
        int sum = accumulate(mat[i].begin(), mat[i].end(), 0);
        strength.push_back({sum, i});
    }
    sort(strength.begin(), strength.end());
    vector<int> result;
    for (int i = 0; i < k; i++)
    {
        result.push_back(strength[i].second);
    }

    return result;
}

int main()
{
    return 0;
}