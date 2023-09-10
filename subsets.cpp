#include <iostream>
#include <vector>
using namespace std;
void rec(vector<vector<int>> &a, vector<int> &v, vector<int> &nums, int i)
{
    if (i == nums.size())
    {
        a.push_back(v);
        return;
    }
    v.push_back(nums[i]);
    rec(a, v, nums, i + 1);
    v.pop_back();
    rec(a, v, nums, i + 1);
}
vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> a;
    vector<int> v;
    rec(a, v, nums, 0);
    return a;
}
int main()
{
    return 0;
}