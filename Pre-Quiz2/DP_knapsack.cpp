#include <iostream>
#include <vector>
using namespace std;

int C(int i,int j){
    return 2*i+j;
}

int P(int i,int j,vector<vector<int> > &dp){
    if(i == 0){
        return 3*j;
    }
    if(j == 0){
        return 2*i;
    }

    int p1 = P(i-1,j,dp) + 2;
    int p2 = P(i,j-1,dp) + 3;
    int p3 = P(i-1,j-1,dp) + C(i,j);

    if(dp[i][j] == -1){
        dp[i][j] = min(p1,min(p2,p3));
    }

    return dp[i][j];
}


int main(){
    int n,k;
    cin >> n >> k;
    int dp[n+1][k+1] = {-1};
    vector<vector<int> > dp(n+1,vector<int>(k+1,-1));
    cout<<P(n,k,dp);
    return 0;
}
