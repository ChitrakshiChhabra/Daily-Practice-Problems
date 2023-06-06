#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canMakeArithmeticProgression(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int d = 0;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (i == 0)
            d = arr[i + 1] - arr[i];
        else if (d != arr[i + 1] - arr[i])
            return false;
    }
    return true;
}
int main()
{
    return 0;
}