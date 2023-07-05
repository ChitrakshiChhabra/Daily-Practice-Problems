#include <iostream>
#include <vector>
using namespace std;

int longestSubarray(vector<int> &nums)
{

    int n = nums.size();
    int i = 0;
    while (i < n && nums[i] != 1)
        i++;
    if (i == n)
        return 0;

    int currLen = 1, maxi = 1;
    int zeroCnt = 0;
    int j = i + 1;
    int firstZero = -1;
    while (j < n)
    {
        if (nums[j] == 1)
        {
            currLen++;
            maxi = max(maxi, currLen);
        }
        else
        {
            zeroCnt++;
            if (zeroCnt > 1)
            {
                i = firstZero + 1;
                zeroCnt--;
            }
            firstZero = j;
        }
        j++;
    }
    if (maxi == n)
        maxi--;
    return maxi;
}

int main()
{
    return 0;
}