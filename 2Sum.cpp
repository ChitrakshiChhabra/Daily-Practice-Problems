#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {

        map <int, int> hashMap;
        vector <int> ans;
        for(int i = 0; i < nums.size(); i++)
        {
            int rem = target - nums[i];
            if(hashMap.find(rem) != hashMap.end())
            {
                ans = {hashMap[rem], i};
                break;
            }
            hashMap[nums[i]] = i;
        }
        return ans;
    }

int main()
{
    return 0;
}