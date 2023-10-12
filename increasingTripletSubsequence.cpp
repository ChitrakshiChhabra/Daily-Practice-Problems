#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

bool increasingTriplet(vector<int> &nums)
{
    long long a = LLONG_MIN, b = LLONG_MIN, c = LLONG_MIN;
    for (auto i : nums)
    {
        if (a == LLONG_MIN || i <= a)
            a = i;
        else if (b == LLONG_MIN || i <= b)
            b = i;
        else
            return true;
    }
    return false;
}

int main()
{
    return 0;
}