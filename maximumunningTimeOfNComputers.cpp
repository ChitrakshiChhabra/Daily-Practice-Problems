#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

long long maxRunTime(int n, std::vector<int> &batteries)
{
    std::sort(batteries.begin(), batteries.end());
    long long left = 1, right = std::accumulate(batteries.begin(), batteries.end(), 0LL) / n;
    while (left < right)
    {
        long long target = right - (right - left) / 2;
        long long total = std::accumulate(batteries.begin(), batteries.end(), 0LL, [&target](long long a, int b)
                                          { return a + std::min(static_cast<long long>(b), target); });
        if (total >= target * n)
        {
            left = target;
        }
        else
        {
            right = target - 1;
        }
    }
    return left;
}

int main()
{
    return 0;
}