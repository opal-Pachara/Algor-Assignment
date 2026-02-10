#include <iostream>
using namespace std;

int T(int n){
	if(n == 1){
		return 1;
	}
	for(int i = 0; i < n ; i++){
		for(int j = 0;j<n ; j++){
			T(n-1);
		}
	}
	return n;
}

int main(){
	int n;
	cin>>n;
	cout<<T(n);
	return 0;
}

