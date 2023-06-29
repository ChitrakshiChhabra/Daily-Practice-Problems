#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int firstDigit(int num)
{
    int digit;
    while (num > 0)
    {
        digit = num;
        num /= 10;
    }

    return digit;
}
int countBeautifulPairs(vector<int> &nums)
{
    int count = 0;

    for (int i = 0; i < nums.size() - 1; i++)
    {
        int firstI = firstDigit(nums[i]);
        for (int j = i + 1; j < nums.size(); j++)
        {
            int lastJ = nums[j] % 10;
            if (__gcd(firstI, lastJ) == 1)
                count++;
        }
    }
    return count;
}

int main()
{
    return 0;
}