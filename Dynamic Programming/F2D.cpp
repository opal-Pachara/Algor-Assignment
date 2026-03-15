#include <iostream>
#include <vector>
using namespace std;

int F_TopDown(int n,int k,vector<vector<int> > &memo){
    if(k == 0 || k == 1 || k == n){
        return 1;
    }
    if(memo[n][k] == -1){
        memo[n][k] = F_TopDown(n-1,k,memo) + F_TopDown(n-1,k-2,memo);
    }
    return memo[n][k];
}

int main(){
    int n,k;
    cin >> n >> k;
    vector<vector<int> > memo(n+1,vector<int>(k+1,-1));
    int F = F_TopDown(n,k,memo);
    cout<<F;
    return 0;
}