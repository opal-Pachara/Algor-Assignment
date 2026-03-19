#include <iostream>
#include <vector>
using namespace std;

#define INF 500000

void floydWarShall(vector<vector<int>> &matrixGraph) {
    int n = matrixGraph.size();
    for (int k = 1; k < n; k++) {
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < n; j++) {
                if (matrixGraph[i][k] != INF && matrixGraph[k][j] != INF) {
                    matrixGraph[i][j] = min(matrixGraph[i][j], matrixGraph[i][k] + matrixGraph[k][j]);
                }
            }
        }
    }
}

void insertGraph(int edge, vector<vector<int> > &matrixGraph) {
    for (int i = 0; i < edge; i++) {
        int start, end, distance;
        cin >> start >> end >> distance;
        matrixGraph[start][end] = distance;
        matrixGraph[end][start] = distance;
    }
}

void printGraph(int vertex,vector<vector<int> > &matrixGraph) {
    cout << "\n";
    for (int i = 1; i <= vertex; i++) {
        cout<<i<<"| ";
        for (int j = 1; j <= vertex; j++) {
            cout << matrixGraph[i][j] << " ";
        }
    }
}

int main() {
    int vertex, edge;
    cin >> vertex >> edge;

    vector<vector<int> > matrixGraph(vertex + 1, vector<int>(vertex + 1, INF));

    for (int i = 1; i <= vertex; i++) {
        matrixGraph[i][i] = 0;
    }

    insertGraph(edge, matrixGraph);
    floydWarShall(matrixGraph);
    printGraph(vertex, matrixGraph);

    return 0;
}