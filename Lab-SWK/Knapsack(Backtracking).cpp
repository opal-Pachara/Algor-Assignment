#include <iostream>
using namespace std;

int A[] = {13,22,5,8};
int k = 13;
int count = 0;

void print_sol(int x[],int n,int sum){
	int i;
	for(i = 1; i<=n ; i++){
		if(x[i] == 1){
			cout<<A[i-1]<<" ";
		}
	}
	cout<<"\n";
}

void Subset1(int x[],int l,int r,int sum){
	if(sum == k){
		print_sol(x,r,sum);
		return;
	}
	if(l==r){
		return;
	}
	if(sum > k){
		return;
	}
		count++;
		x[l+1] = 1;
		sum += A[l];
		Subset1(x,l+1,r,sum);
		x[l+1] = 0;
		sum -= A[l];
		Subset1(x,l+1,r,sum);
}

int main(){
	int n = 4;
	int x[n+1];
	int sum = 0;
	Subset1(x,1,n+1,sum);
	cout<<"Count is :"<<count;
	return 0;
}
