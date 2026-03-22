#include <iostream>
#include <vector>
using namespace std;

#define INF 500000

void floydWarShall(vector<vector<int> > &matrixGraph) {
    int n = matrixGraph.size();
    for (int k = 1; k < n; k++) {
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < n; j++) {
                if (matrixGraph[i][k] != INF && matrixGraph[k][j] != INF) {
                    // นำค่าปัจจุบันเทียบกับ ค่าน้อยที่้สุด
                    matrixGraph[i][j] = min(matrixGraph[i][j], matrixGraph[i][k] + matrixGraph[k][j]);
                }
            }
        }
    }
}


int main(){
    int vertex , edge; //  vertex = จำนวน Node ทั้งหมด || edge = จำนวนเส้น
    cin >> vertex >> edge ;
    int graph[vertex+1][vertex+1];

    vector<int> graphlist(vertex);

    // intial ค่าเลข 0 เส้นแทยงใน Graph
    for(int i = 1 ; i <= edge ; i++){
        graph[i][i] = 0;
    }
    
    // Matrix Graph ข้อดีคือเขียนง่าย
    for(int i = 1 ; i <= edge; i++){
        int start,end,weight;
        cin >> start >> end >> weight;
        graph[start][end] = weight;
        // graph[end][start] = weight; // ถ้าทำเป็น Undirect Graph ต้องเชื่อมไปกลับ
    }

    // list Graph ข้อดีคือ ข้อมูลต่อกันไม่เป็น Matrix
    // Example 1 1 -> 2 -> 3
    for(int i = 1; i <= edge; i++){
        int start,end,weight;
        cin >> start >> end >> weight;
        graphlist[start][end].push_back(weight);
        // graphlist[end][start].push_back(weight);
    }

    return 0;
}