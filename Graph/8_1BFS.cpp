#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int getShortestPath(vector<vector<int>>& adj, int start, int dest, int n) {
    vector<int> dist(n + 1, -1); 
    queue<int> q;

    q.push(start);
    dist[start] = 0;
    while (!q.empty()) {
        int u = q.front();
        q.pop();

        if (u == dest) {
            return dist[u];
        }

        for (int i = 0; i < adj[u].size(); i++) {
            int v = adj[u][i];
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1; 
                q.push(v);
            }
        }
    }
    
    return -1;
}

int main() {
    int n;
    cin>>n;

    vector<vector<int>> adj(n + 1);

    for (int i = 0; i < n; ++i) {
        int u;
        cin >> u;
        int v;
        while (cin >> v && v != 0) {
            adj[u].push_back(v);
        }
    }
    int s, d;
    cin >> s >> d;
    int shortpath = getShortestPath(adj, s, d, n);
    
    cout << shortpath << endl;

    return 0;
}