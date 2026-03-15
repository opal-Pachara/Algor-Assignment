#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void insertGraph(vector<pair<int,int> > adj[],int m){
    int i;
    for(i = 0; i < m ; i++){
        int u,v,w;
        cin >> u >> v >> w;
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }
}

int ShotPath(int n,int s,int t,vector<pair<int,int> > adj[]){
    vector<int> dist(n+1,50000);
    priority_queue<pair<int,int>, vector<pair<int,int> > , greater<pair<int,int> > > pq;

    dist[s] = 0;
    pq.push(make_pair(0,s));

    while(!pq.empty()){
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if(d <= dist[u]){
            int i;
            for(i = 0 ; i < adj[u].size(); i++){
                int v = adj[u][i].first;
                int weight = adj[u][i].second;

                if(dist[u] + weight < dist[v]){
                    dist[v] = dist[u] + weight;
                    pq.push(make_pair(dist[v],v));
                }
            }
        }
    }
    return dist[t];
}


int main(){
    int n,m,s,t;
    cin >> n >> m >> s >> t;
    vector<pair<int,int> > adj[n+1];

    insertGraph(adj,m);
    cout<<ShotPath(n,s,t,adj);
    return 0;
}