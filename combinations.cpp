#include <iostream>
#include <vector>
using namespace std;

void fun(int num, int n, int k, vector<int> temp, vector<vector<int>> &ans)
{
    if (temp.size() == k)
    {
        ans.push_back(temp);
        return;
    }
    if (num > n)
        return;

    for (int i = num; i <= n; i++)
    {
        temp.push_back(i);
        fun(i + 1, n, k, temp, ans);
        temp.pop_back();
    }
}
vector<vector<int>> combine(int n, int k)
{
    vector<vector<int>> ans;
    vector<int> temp;
    fun(1, n, k, temp, ans);
    return ans;
}

int main()
{
    return 0;
}