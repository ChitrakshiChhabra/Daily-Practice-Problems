#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int hIndex(vector<int> &citations)
{
    int n = citations.size();
    if (n == 1)
    {
        if (citations[0] >= 1)
            return 1;
        else
            return 0;
    }
    sort(citations.begin(), citations.end());

    int hValue = citations[0];
    for (int i = n - 1; i >= 0; i--)
    {
        if (citations[i] >= n - i)
        {
            hValue = n - i;
        }
    }
    return hValue;
}

int main()
{
    return 0;
}