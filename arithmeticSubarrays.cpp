#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<bool> checkArithmeticSubarrays(vector<int> &nums, vector<int> &l, vector<int> &r)
{
    vector<bool> ans;
    for (int i = 0; i < l.size(); i++)
    {
        vector<int> temp;
        for (int j = l[i]; j <= r[i]; j++)
            temp.push_back(nums[j]);
        sort(temp.begin(), temp.end());

        int diff = temp[1] - temp[0];
        bool flag = true;
        for (int i = 2; i < temp.size(); i++)
        {
            if (temp[i] - temp[i - 1] != diff)
            {
                flag = false;
                break;
            }
        }
        ans.push_back(flag);
    }

    return ans;
}
int main()
{
    return 0;
}