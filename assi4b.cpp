#include <iostream>
#include <vector>
using namespace std;

class Graph
{
    int V;
    vector<vector<int>> adj; // Adjacency list

    void countPathsUtil(int u, int d, vector<bool> &visited, int &pathCount)
    {
        visited[u] = true;

        if (u == d)
        {
            pathCount++;
        }
        else
        {
            for (int v : adj[u])
            {
                if (!visited[v])
                {
                    countPathsUtil(v, d, visited, pathCount);
                }
            }
        }

        // Backtrack
        visited[u] = false;
    }

public:
    // Constructor
    Graph(int V)
    {
        this->V = V;
        adj.resize(V);
    }

    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
    }

    int countPaths(int start, int end)
    {
        vector<bool> visited(V, false); // Keep track of visited nodes
        int pathCount = 0;

        countPathsUtil(start, end, visited, pathCount); // Start DFS
        return pathCount;
    }
};

int main()
{
    // Create a graph
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(0, 3);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(1, 4);
    g.addEdge(3, 4);

    // Input: Count paths between A and E (0 and 4)
    cout << "Total paths between A and E are " << g.countPaths(0, 4) << endl;

    // Input: Count paths between A and C (0 and 2)
    cout << "Total paths between A and C are " << g.countPaths(0, 2) << endl;

    return 0;
}
