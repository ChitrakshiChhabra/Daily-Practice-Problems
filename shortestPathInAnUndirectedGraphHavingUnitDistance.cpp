#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> shortestPath(vector<vector<int>> &edges, int N, int M, int src)
{
    // code here
    vector<int> adj[N];
    for (int i = 0; i < M; i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }

    vector<int> distance(N, INT_MAX);
    distance[src] = 0;
    queue<pair<int, int>> q;
    q.push({src, 0});

    while (!q.empty())
    {
        int node = q.front().first;
        int dist = q.front().second;
        q.pop();

        for (auto a : adj[node])
        {
            int d = dist + 1;
            if (d < distance[a])
            {
                distance[a] = d;
                q.push({a, d});
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (distance[i] == INT_MAX)
            distance[i] = -1;
    }
    return distance;
}

int main()
{
    return 0;
}