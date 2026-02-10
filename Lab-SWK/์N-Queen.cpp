#include <iostream>
#include <cmath>
using namespace std;

int n = 5, x[5];
int count = 0;

void n_queens(int k){
	if(k==n){
		int flag = 0;
		
		for(int j = 1 ; j < k; j++){
			for(int p = 0; p < j; p++){
				if(abs(p-j) == abs(x[p]-x[j])|| x[j] == x[p]) {
					flag = 1;
				}
			}
		}
		if(flag == 0){
			for(int i = 0 ; i < n; i++){
				cout<<x[i]<<" ";
			}
			cout<<"\n";
		}
		count++;
	}
		else{
			for(int row = 0; row < n; row++){
				x[k] = row;
				n_queens(k+1);
		}
	}
}

int main(){
	n_queens(0);
	cout<<"Count is :"<<count;
	return 0;
}
