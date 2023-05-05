#include <iostream>
#include <vector>
using namespace std;

int numberOfBeams(vector<string> &bank)
{
    int i, m = 0, total_laser_beams = 0;
    for (i = 0; i < bank.size(); i++)
    {
        if (count(bank[i].begin(), bank[i].end(), '1') > 0)
        {
            if (m == 0)
            {
                m = count(bank[i].begin(), bank[i].end(), '1');
            }
            else
            {
                total_laser_beams += m * count(bank[i].begin(), bank[i].end(), '1');
                m = count(bank[i].begin(), bank[i].end(), '1');
            }
        }
    }
    return total_laser_beams;
}

int main()
{
    return 0;
}