#include <iostream>
#include <vector>
using namespace std;

long long CNK(int n,int k,vector<vector<int> > &memo){
    if(k > n){
        return 0;
    }
    if(k == 0){
        return n;
    }
    if(k == n){
        return n*n;
    }
    if(memo[n][k] == -1){
        memo[n][k] = CNK(n-1,k-1,memo) + CNK(n-1,k,memo);
    }
    return memo[n][k];
}

void AddCNKArray(int n,vector<int> &arr,vector<vector<int> > &memo){
    int k = n;
    while(k>=0){
        int num1 = n;
        for(int i = 0; i <= n; i++){
            arr[i] = CNK(num1,i,memo);
            num1--;
        }
        k--;
    }
}

void SumCNK(int n,vector<int> arr){
    int i;
    int SumCNK = 0;
    for(i = 0;i <= n ; i++){
        SumCNK += arr[i];
    }
    cout<<SumCNK;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int> > memo(n+1,vector<int>(n+1,-1));
    vector<int> arr(n+1);
    AddCNKArray(n,arr,memo);
    SumCNK(n,arr);
    return 0;
}