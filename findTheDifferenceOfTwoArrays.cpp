#include <iostream>
#include <vector>
#include <map>
using namespace std;
vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
{
    map<int, int> mpp;
    for (int i = 0; i < nums1.size(); i++)
        mpp[nums1[i]] = 1;

    for (int j = 0; j < nums2.size(); j++)
    {
        if (mpp.find(nums2[j]) == mpp.end())
            mpp[nums2[j]] = -1;
        else
        {
            if (mpp[nums2[j]] == 1 || mpp[nums2[j]] == 0)
                mpp[nums2[j]] = 0;
            else
                mpp[nums2[j]] = -1;
        }
    }

    vector<int> ans1, ans2;
    for (auto a : mpp)
    {
        if (a.second == 0)
            continue;
        if (a.second == 1)
            ans1.push_back(a.first);
        if (a.second == -1)
            ans2.push_back(a.first);
    }
    return {ans1, ans2};
}
int main()
{
    return 0;
}