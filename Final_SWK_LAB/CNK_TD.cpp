#include <iostream>
#include <vector>
using namespace std;

long long CNK_TD(int n,int k,vector<vector<long long> > &memo){
    if(n < k){
        return 0;
    }
    if(k == 0){
        return n;
    }
    if(k == n){
        return n*n;
    }
    if(memo[n][k] == -1){
        memo[n][k] = CNK_TD(n-1,k-1,memo) + CNK_TD(n-1,k,memo);
    }
    return memo[n][k];
}

long long CNK_BU(int n,int k){
    if(n < k){
        return 0;
    }
    vector<vector<long long> > mem(n+1,vector<long long>(k+1,0));
    for(int i = 0 ; i < mem.size(); i++){
        mem[i][0] = i;
        mem[0][i] = 0;
        if(i <= k){
            mem[i][i] = i*i;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i && j <= k; j++) {
            mem[i][j] = mem[i - 1][j - 1] + mem[i - 1][j];
        }
    }
    return mem[n][k];
}

int main(){
    int n,k;
    cin >> n >> k;
    vector<vector<long long> > memo(n+1,vector<long long>(k+1,-1));
    cout <<"Top Down : "<< CNK_TD(n,k,memo);
    cout << "\n";
    cout <<"Bottom Up : "<< CNK_BU(n,k);
    return 0;
}