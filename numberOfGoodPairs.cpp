#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int numIdenticalPairs(std::vector<int> &nums)
{
    unordered_map<int, int> count;
    int result = 0;

    for (int num : nums)
    {
        if (count.find(num) != count.end())
        {
            result += count[num];
            count[num]++;
        }
        else
        {
            count[num] = 1;
        }
    }

    return result;
}

int main()
{
    return 0;
}