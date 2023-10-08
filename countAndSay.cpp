#include <iostream>
#include <vector>
#include <string>
using namespace std;

string countAndSay(int n)
{
    string ans = "1";
    int i = 1;
    while (i < n)
    {
        string cur = "";
        for (int j = 0; j < ans.size(); j++)
        {
            int count = 1;
            while (j + 1 < ans.size() && ans[j] == ans[j + 1])
            {
                count++;
                j++;
            }
            cur += to_string(count) + ans[j];
        }
        ans = cur;
        i++;
    }
    return ans;
}

int main()
{
    return 0;
}