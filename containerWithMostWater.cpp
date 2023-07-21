#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int> &height)
{
    int left = 0, right = height.size() - 1;
    int ans = INT_MIN;

    while (left < right)
    {
        int minHt = min(height[left], height[right]);
        int dis = right - left;
        int val = minHt * dis;
        ans = max(ans, val);
        if (height[left] <= height[right])
            left++;
        else
            right--;
    }

    return ans;
}

int main()
{
    return 0;
}