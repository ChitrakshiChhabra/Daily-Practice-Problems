#include <iostream>
#include <vector>
using namespace std;

vector<string> removeComments(vector<string> &source)
{
    bool isComment = false, needJoin = false;
    vector<string> res;
    for (auto &s : source)
    {
        string curr;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '/')
            {
                if (!isComment)
                {
                    if (i == (s.size() - 1))
                    {
                        curr.push_back(s[i]);
                        break;
                    }
                    if (s[i + 1] == '/')
                        break;
                    if (s[i + 1] == '*')
                    {
                        isComment = true;
                        i++;
                    }
                    else
                        curr.push_back(s[i]);
                }
            }
            else if (s[i] == '*')
            {
                if (!isComment)
                {
                    curr.push_back(s[i]);
                }
                else if (i != (s.size() - 1) && s[i + 1] == '/')
                {
                    isComment = false;
                    i++;
                }
            }
            else if (!isComment)
            {
                curr.push_back(s[i]);
            }
        }
        if (!curr.empty())
        {
            if (needJoin)
            {
                res.back() += curr;
                needJoin = false;
            }
            else
            {
                res.emplace_back(curr);
            }
            if (isComment)
                needJoin = true;
        }
        else if (needJoin && !isComment)
        {
            needJoin = false;
        }
    }
    return res;
}

int main()
{
    return 0;
}