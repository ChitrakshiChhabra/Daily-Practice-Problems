#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

int maxConsecutiveAnswers(string answerKey, int k)
{

    int maxi = INT_MIN;
    int n = answerKey.size();
    if (n == 1)
        return 1;

    // converting from false to true
    int left = 0, right = left + 1;
    int countFalse = 0;
    if (answerKey[left] == 'F')
        countFalse++;
    int length1 = 0;
    while (left <= right && right < n)
    {
        if (answerKey[right] == 'F')
            countFalse++;
        while (countFalse > k)
        {
            if (answerKey[left] == 'F')
                countFalse--;
            left++;
        }
        length1 = (right - left) + 1;
        maxi = max(maxi, length1);
        right++;
    }

    // converting from true to false
    left = 0;
    right = left + 1;
    int countTrue = 0;
    if (answerKey[left] == 'T')
        countTrue++;
    int length2 = 0;
    while (left <= right && right < n)
    {
        if (answerKey[right] == 'T')
            countTrue++;
        while (countTrue > k)
        {
            if (answerKey[left] == 'T')
                countTrue--;
            left++;
        }
        length2 = (right - left) + 1;
        maxi = max(maxi, length2);
        right++;
    }

    return maxi;
}

int main()
{
    return 0;
}