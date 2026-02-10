#include <iostream>
#include <cmath>
using namespace std;

int count = 0;

void permute(int x[],int start,int end){
	if(start == end){
		int flag = 0;
		for(int i = 0 ; i < end; i++){
			for(int j = i+1; j < end; j++){
				if(abs(j-i) == abs(x[j]-x[i])|| x[i] == x[j]) {
					flag = 1;
					break;
				}
			}
		}
		if(flag == 0){
			for(int i = 1; i <= end; i++){
				cout<<x[i]<<" ";
			}
			cout<<"\n";
		}
		count++;
		return;
	}
	
	for(int i = start; i <= end; i++){
		swap(x[start],x[i]);
		permute(x,start+1,end);
		swap(x[start],x[i]);
	}
}

int main(){
	int n = 5;
	int x[] = {-1,0,1,2,3,4};
	permute(x,1,n);
	cout<<"Count is : "<<count;
	return 0;
}
