#include <iostream>
#include <cmath>
using namespace std;

int count = 0;

void permute(int x[], int start, int end){
    if(start == end){
        count++;
        bool flag = true;
        for(int i = 0 ; i < end; i++){
			for(int j = i+1; j < end; j++){
				if(abs(j-i) == abs(x[j]-x[i])|| x[i] == x[j]) {
					flag = false;
					break;
				}
			}
		}
        if(flag){
            for(int i = 1; i <= end; i++){
                cout<<x[i]<<" ";
            }
            cout<<"\n";
        }
        return;
    }

    for(int i = start; i <= end; i++){
		swap(x[start],x[i]);
		permute(x,start+1,end);
		swap(x[start],x[i]);
	}
}

int main(){
    int n;
    cin>>n;
	int x[n+1];
    //{-1,0,1,2,3,4,...,n}
    for(int i = 0; i<=n; i++){
        x[i] = i;
    }

    permute(x, 1, n);
    cout<<"Count is : "<<count;
    return 0;
}