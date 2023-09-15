#include <iostream>
#include <vector>
using namespace std;

bool canJump(vector<int> &nums)
{
    int n = nums.size();
    int last_pos = n - 1;
    for (int i = n - 1; i > -1; i--)
    {
        if (nums[i] + i >= last_pos)
            last_pos = i;
    }
    if (last_pos == 0)
        return true;
    return false;
}

int main()
{
    return 0;
}