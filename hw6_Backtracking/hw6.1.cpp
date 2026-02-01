#include <iostream>
using namespace std;
int count = 0;

void permute(int x[],int start,int end){
    if(start == end){
        bool NearNum = 0;
        for(int i = 0;i < end ; i++){
            if(x[i]==1&&x[i+1]==2||x[i]==2&&x[i+1]==1){
                NearNum = 1;
            }
        }
        if(NearNum){
            count++;
        }
        return;
    }

    for(int i = start ; i <= end; i++){
        swap(x[start],x[i]);
        permute(x,start+1,end);
        swap(x[start],x[i]);
    }
}

void insertarrX(int x[],int n){
    int i;
    for(i = 0;i < n; i++){
        x[i] = i+1;
    }
}

int main(){
    int n;
    cin>>n;
    int x[n];
    insertarrX(x,n);
    permute(x,0,n-1);
    cout<<count;
    return 0;
}