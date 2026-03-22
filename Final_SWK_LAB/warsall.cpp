#include <iostream>
#include <vector>
using namespace std;

#define INF 500000

void printGraph(int vertex,vector<vector<int> > &matrixGraph) {
    cout << "\n";
    for (int i = 1; i <= vertex; i++) {
        cout<<i<<"| ";
        for (int j = 1; j <= vertex; j++) {
            cout << matrixGraph[i][j] << " ";
        }
        cout<<"\n";
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

void floydWarShall(vector<vector<int> > &matrixGraph,int vertex) {
    int n = matrixGraph.size();
    for (int k = 1; k < n; k++) {
        cout << "D" << k;
        printGraph(vertex, matrixGraph);
        cout << "\n";
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < n; j++) {
                if (matrixGraph[i][k] != INF && matrixGraph[k][j] != INF) {
                    matrixGraph[i][j] = min(matrixGraph[i][j], matrixGraph[i][k] + matrixGraph[k][j]);
                }
            }
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
    cout<< "\n";
    cout << "D0";
    printGraph(vertex, matrixGraph);
    cout<< "\n";
    floydWarShall(matrixGraph,vertex);
    cout << "Complete Graph :";
    printGraph(vertex, matrixGraph);

    return 0;
}

/*
5 8
1 2 7
1 4 10
1 5 2
2 3 2
2 4 1
2 5 5
3 4 8
3 5 9

OUTPUT
1| 0 7 9 8 2
2| 7 0 2 1 5
3| 9 2 0 3 7
4| 8 1 3 0 6
5| 2 5 7 6 0
*/