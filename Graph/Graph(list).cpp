#include <iostream>
#include <vector>
using namespace std;

void insertGraph(vector<int> list[],int edge){
	int i;
	for(i = 0; i < edge; i++){
		int start,end;
		cin>>start;
		cin>>end;
		list[start].push_back(end);
	}
}

void printGraph(vector<int> list[],int vertex,int edge){
	int i,j;
	for(i = 0;i < vertex; i++){
		for(j = 0; j < list[i].size(); j++){
			cout<<list[i][j]<<" ";
		}
		cout<<"\n";
	}
}

int main(){
	int vertex,edge;
	cin>>vertex>>edge;
	vector<int> list[vertex];
	insertGraph(list,edge);
	
	
	return 0;
}
