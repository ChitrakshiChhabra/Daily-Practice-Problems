#include <iostream>
#include <vector>
using namespace std;

int minPatches(vector<int> &nums, int n)
{
    long long int sum = 0, cnt = 0, i = 0;
    while (sum < n)
    {
        // cout<<sum<<" ";
        if (i < nums.size() && nums[i] <= sum + 1)
        {
            sum += nums[i++];
        }
        else
        {
            cnt++;
            sum += sum + 1;
        }
    }
    return cnt;
}

int main()
{
    return 0;
}