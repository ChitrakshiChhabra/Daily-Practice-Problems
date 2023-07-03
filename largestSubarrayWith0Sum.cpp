#include <iostream>
#include <vector>
#include <map>
using namespace std;
int maxLen(vector<int> &A, int n)
{
    int maxLen = 0;
    map<int, int> hash;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
        if (sum == 0)
            maxLen = max(i + 1, maxLen);
        if (hash.find(sum) != hash.end())
        {
            int len = i - hash[sum];
            maxLen = max(len, maxLen);
        }
        else
            hash[sum] = i;
    }
    return maxLen;
}
int main()
{
    return 0;
}