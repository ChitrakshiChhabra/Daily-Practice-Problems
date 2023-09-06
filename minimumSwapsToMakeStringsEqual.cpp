#include <iostream>
#include <vector>
using namespace std;

int minimumSwap(string s1, string s2)
{
    vector<int> v(2, 0);
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == 'x' && s2[i] == 'y')
            v[0]++;
        else if (s1[i] == 'y' && s2[i] == 'x')
            v[1]++;
    }
    if ((v[0] + v[1]) % 2 != 0)
        return -1;
    int ans = 0;
    ans = min(v[0], v[1]) % 2;
    ans += (v[0] + v[1]) / 2;
    return ans;
}

int main()
{
    return 0;
}