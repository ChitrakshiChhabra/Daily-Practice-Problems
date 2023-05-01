#include <iostream>
#include <map>
#include <vector>
using namespace std;
map<char, string> mpp;
vector<string> ans;
void fun(int i, string digits, string ds)
{
    if (i >= digits.size())
    {
        ans.push_back(ds);
        return;
    }
    string str = mpp[digits[i]];
    for (int j = 0; j < str.size(); j++)
    {
        ds += str[j];
        fun(i + 1, digits, ds);
        ds.pop_back();
    }
}
vector<string> letterCombinations(string digits)
{
    mpp['2'] = "abc";
    mpp['3'] = "def";
    mpp['4'] = "ghi";
    mpp['5'] = "jkl";
    mpp['6'] = "mno";
    mpp['7'] = "pqrs";
    mpp['8'] = "tuv";
    mpp['9'] = "wxyz";
    if (digits == "")
        return ans;
    string ds;
    fun(0, digits, ds);
    return ans;
}
int main()
{
    string digits = "23";
    ans = letterCombinations(digits);
    for(auto a: ans)
        cout << a << " ";
    cout << endl;
    return 0;
}