#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool containsNearbyAlmostDuplicate(vector<int> &nums, int indexDiff, int valueDiff)
{
    vector<pair<int, int>> arr(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        arr[i].first = nums[i];
        arr[i].second = i;
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (arr[i].first + valueDiff >= arr[j].first)
            {
                if (abs(arr[i].second - arr[j].second) <= indexDiff)
                    return true;
            }
            else
                break;
        }
    }
    return false;
}

int main()
{
    return 0;
}