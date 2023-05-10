#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> generateMatrix(int n)
{
    vector<vector<int>> mat(n, vector<int>(n, 0));
    int number = 1, pn = 0;
    int i = 0, j = 0, r = n - 1;
    while (number <= n * n && pn != number)
    {
        pn = number;
        int f = i;
        while (j < r)
        {
            mat[i][j] = number;
            number++;
            j++;
        }
        while (i < r)
        {
            mat[i][j] = number;
            number++;
            i++;
        }

        while (j > f)
        {
            mat[i][j] = number;
            number++;
            j--;
        }
        while (i > f)
        {
            mat[i][j] = number;
            number++;
            i--;
        }
        i++;
        j++;
        r--;
    }
    if (n % 2 != 0)
        mat[n / 2][n / 2] = n * n;
    return mat;
}
int main()
{
    vector<vector<int>> mat = generateMatrix(3);
    for(auto a: mat)
    {
        for(auto b: a)
            cout << b <<" ";
        cout << endl;
    }
    return 0;
}