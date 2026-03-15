#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define inf 50000
#define FALSE -1
#define TRUE 1
#define V 5

int minDistance(vector<int> &dist,vector<int> &inTree){
	int min = inf, min_index;
	for(int v = 0; v < V; v++){
		if(inTree[v] == FALSE && dist[v] <= min){
			min = dist[v];
			min_index = v;
		}
	}
	return min_index;
}

void dijkstra(vector<vector<int> > &graph,int src){
	vector<int> dist(V);
	vector<int> inTree(V);
	vector<int> parent(V);
	int i;
	for(i = 0; i < V; i++){
		dist[i] = inf;
		parent[i] = -1;
		inTree[i] = -1;
	}
	dist[src] = 0;
	for(i = 0; i < V-1 ; i++){
		int u = minDistance(dist,inTree);
		inTree[u] = TRUE;
		for(int v = 0; v < V; v++){
			if(inTree[v] == FALSE && dist[u] + graph[u][v] < dist[v]){
				dist[v] = dist[u] + graph[u][v];
				parent[v] = u;
			}
		}
	}
	for(i = 0; i < V; i++){
		cout<<parent[i]<<" ";
	}
}

int main(){
	int vertex,edge;
	cin>>vertex>>edge;
	vector<vector<int> > graph(vertex, vector<int>(vertex,0));
	
	int i;
	for(i = 0; i < edge ; i++){
		int start,end;
		cin>>start;
		cin>>end;
		graph[start][end] = 1;
		graph[end][start] = 1;
	}
	
	dijkstra(graph,0);
	
	return 0;
}