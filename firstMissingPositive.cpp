#include <iostream>
#include <vector>
#include <set>
using namespace std;

int firstMissingPositive(vector<int> &nums)
{
    int sum = 0;
    int k = nums.size();

    set<int> mt;

    for (int i = 0; i < k; i++)
    {
        mt.insert(nums[i]);
    }
    int ky;
    for (int i = 1; i <= nums.size() + 1; i++)
    {
        if (mt.count(i) == 0)
        {
            ky = i;
            break;
        }
    }
    return ky;
}

int main()
{
    return 0;
}