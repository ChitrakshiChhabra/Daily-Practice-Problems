#include <iostream>
#include <vector>
using namespace std;

vector<int> grayCode(int n)
{
    vector<int> ans(1 << n);

    for (int i = 0; i < (1 << n); i++)
        ans[i] = i ^ (i >> 1);
    return ans;
}

int main()
{
    return 0;
}