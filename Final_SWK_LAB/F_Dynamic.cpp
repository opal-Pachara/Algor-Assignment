#include <iostream>
#include <vector>
using namespace std;

long long F_TD(int n,int k,vector<vector<int> > &memo){
    if(k == 0||k==1||n==k){
        return 1;
    }
    if(memo[n][k] == -1){
        memo[n][k] = F_TD(n-1,k,memo) + F_TD(n-1,k-2,memo); 
    }
    return memo[n][k];
}

long long F_BU(int n,int k){
    vector<vector<long long> > memo(n+1,vector<long long>(k+1));
    for(int i = 0 ; i <= n ; i++){
        memo[i][0] = 1;
        memo[i][1] = 1;
        memo[i][i] = 1;
    }
    for(int i = 2; i <= n; i++){
        for(int j = 2 ; j < i; j++){
            memo[i][j] = memo[i-1][j] + memo[i-1][j-2];
        }
    }
    return memo[n][k];
}

int main(){
    int n,k;
    cin >> n >> k;
    vector<vector<int> > memo(n+1,vector<int>(k+1,-1));
    cout << F_TD(n,k,memo);
    cout << "\n";
    cout << F_BU(n,k);
    return 0;
}