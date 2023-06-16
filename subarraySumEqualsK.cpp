#include <iostream>
#include <vector>
#include <map>
using namespace std;

int subarraySum(vector<int> &nums, int k)
{

    map<int, int> mpp;
    int sum = 0, count = 0;
    mpp[sum] = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        int diff = sum - k;
        if (mpp.find(diff) != mpp.end())
            count += mpp[diff];
        mpp[sum]++;
    }
    return count;
}
int main()
{
    return 0;
}