#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void insertGraph(vector<vector<int> > &graph,int edge){
	int i;
	for(i = 0; i < edge ; i++){
		int start,end;
		cin>>start;
		cin>>end;
		graph[start][end] = 1;
		graph[end][start] = 1;
	}
}

void printGraph(vector<vector<int> > &graph, int vertex){
	int i,j;
	for(i = 0; i < vertex; i++){
		for(j = 0; j < vertex; j++){
			cout<<graph[i][j]<<" ";
		}
		cout<<"\n";
	}
}

int main(){
	int vertex,edge;
	cin>> vertex >> edge;

	vector<vector<int> > graph(vertex, vector<int>(vertex,0));

	insertGraph(graph,edge);
	printGraph(graph,vertex);
	

	return 0;
}
