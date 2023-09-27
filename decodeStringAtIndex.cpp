#include <iostream>
using namespace std;
string decodeAtIndex(string input, int k)
{
    long long totalLength = 0;

    for (auto character : input)
    {
        if (isdigit(character))
        {
            totalLength *= character - '0';
        }
        else
        {
            totalLength++;
        }
    }

    for (int i = input.size() - 1; i >= 0; i--)
    {
        if (isdigit(input[i]))
        {
            totalLength /= (input[i] - '0');
            k = k % totalLength;
        }
        else
        {
            if (k == 0 || totalLength == k)
                return string(1, input[i]);
            totalLength--;
        }
    }

    return "";
}

int main()
{
    return 0;
}