#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<string> findRepeatedDnaSequences(string s)
{
    vector<string> repeatedSequences;
    unordered_map<int, int> hashCounts;

    int n = s.size();
    int windowSize = 10;
    int hash = 0;
    int base = 4;
    int power = 1;

    for (int i = 0; i < windowSize; ++i)
    {
        hash = hash * base + charToInt(s[i]);
        power *= base;
    }
    hashCounts[hash] = 1;

    for (int i = 1; i <= n - windowSize; ++i)
    {

        hash = hash * base - charToInt(s[i - 1]) * power + charToInt(s[i + windowSize - 1]);
        ++hashCounts[hash];

        if (hashCounts[hash] == 2)
        {
            repeatedSequences.push_back(s.substr(i, windowSize));
        }
    }

    return repeatedSequences;
}

int charToInt(char c)
{
    switch (c)
    {
    case 'A':
        return 0;
    case 'C':
        return 1;
    case 'G':
        return 2;
    case 'T':
        return 3;
    }
    return -1;
}

int main()
{
    return 0;
}