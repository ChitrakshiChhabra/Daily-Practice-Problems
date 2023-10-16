#include <iostream>
#include <vector>
using namespace std;

vector<int> getRow(int rowIndex)
{
    vector<int> result;
    result.push_back(1);
    for (int i = 1; i <= rowIndex; i++)
    {
        long prevElement = result[i - 1];
        long currentElement = prevElement * (rowIndex - i + 1) / i;
        result.push_back(static_cast<int>(currentElement));
    }

    return result;
}

int main()
{
    return 0;
}