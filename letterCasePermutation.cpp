#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
vector<string>output;
int count=1;
void add(char n, int pos)
{
    int i = 0;
    while (i < count)
    {
        string x = output[i];
        x[pos] = n;
        output.push_back(x);
        i++;
    }
    count += count;
}
vector<string> letterCasePermutation(string s)
{
    //  first we change all character to lower letter
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    output.push_back(s);
    for (int i = 0; i < s.length(); i++)
    {
        // check if i is alphabet or not
        if (isalpha(s[i]))
        {
            add(toupper(s[i]), i);
        }
    }
    return output;
}

int main()
{
    return 0;
}