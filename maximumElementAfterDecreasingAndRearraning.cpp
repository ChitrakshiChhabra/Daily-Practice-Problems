#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maximumElementAfterDecrementingAndRearranging(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int res = 1;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > res)
            res = res + 1;
    }
    return res;
}

int main()
{
    return 0;
}