#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<int> fullBloomFlowers(vector<vector<int>> &flowers, vector<int> &people)
{
    map<int, int> flowerCount;

    for (const auto &flower : flowers)
    {
        flowerCount[flower[0]]++;
        flowerCount[flower[1] + 1]--;
    }

    vector<int> days;
    for (const auto &entry : flowerCount)
    {
        days.push_back(entry.first);
    }
    sort(days.begin(), days.end());

    int totalFlowers = 0;
    for (int day : days)
    {
        totalFlowers += flowerCount[day];
        flowerCount[day] = totalFlowers;
    }

    vector<int> answer;
    for (int personTime : people)
    {
        auto it = upper_bound(days.begin(), days.end(), personTime);
        int index = distance(days.begin(), it);
        if (index == 0)
            answer.push_back(0);
        else
            answer.push_back(flowerCount[days[index - 1]]);
    }

    return answer;
}

int main()
{
    return 0;
}