#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

string largestNumber(vector<int> &nums)
{
    vector<string> vec;

    for (auto it : nums)
    {
        vec.push_back(to_string(it));
    }

    sort(vec.begin(), vec.end(), [](string &a, string &b)
         { return a + b > b + a; });

    string ans;
    for (auto it : vec)
    {
        ans += it;
    }

    int i = 0;
    while (ans[i] == '0' && i + 1 < ans.size())
    {
        i++;
    }

    return ans.substr(i);
}

int main()
{
    return 0;
}