#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int maxCount = 0, consCount = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            consCount++;
            if (consCount > maxCount)
                maxCount = consCount;
        }
        else
            consCount = 0;
    }
    return maxCount;
}

int main()
{
    return 0;
}