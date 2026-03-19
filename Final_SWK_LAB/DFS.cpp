#include <iostream>
#include <vector>
using namespace std;

void DFS(vector<int> &path,vector<vector<int> > &graph,vector<bool> &visited,int start,int target){
    visited [start] = true;
    path.push_back(start);

    if(start == target){
        for(int i = 0 ; i < path.size(); i++){
            cout<<path[i]<<" ";
        }
        cout<<"\n";
    }
    else{
        for(int i = 1 ; i < graph.size(); i++){
            if(graph[start][i] == 1 && !visited[i]){
                DFS(path,graph,visited,i,target);
        }
    }
    }
    path.pop_back();
    visited[start] = false;
}

void insertGraph(int edge,vector<vector<int> >&graph){
    for(int i = 1; i <= edge ; i++){
        int start,end;
        cin >> start >> end;
        graph[start][end] = 1;
        graph[end][start] = 1;
    }
}

int main(){
    int vertex, edge , target, start;
    cin >> vertex >> edge;
    vector<vector<int> > graph(vertex+1,vector<int>(vertex+1,0));
    vector<bool> visited(vertex+1,false);
    vector<int> path;
    insertGraph(edge,graph);
    cin >> start >> target;
    DFS(path,graph,visited,start,target);
    return 0;
}