#include <iostream>
#include <vector>
using namespace std;

vector<long long> dp(100000,-1); //long long dp[100000] = {-1};

unsigned long long fibbonancidynamic(int n, vector<long long>& dp) {
    if (n <= 1) {
        return n;
    }
    if (dp[n] != -1){
        return dp[n];
    }
    dp[n] = fibbonancidynamic(n - 1, dp) + fibbonancidynamic(n - 2, dp);
    return dp[n];
}

unsigned long long int fibbonanci_bottomup(int n){
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return 1;
    }
    vector<int> memo(n+1);
    memo[0] = 0;
    memo[1] = 1;
    for(int i = 2; i <= n ; i++){
        memo[i] = memo[i-1] + memo[i-2];
    }
    return memo[n];
}

void printvector(vector<long long> &dp,int n){
    int i;
    for(i = 0; i < n ; i++){
        cout<<dp[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    vector<long long> dp(n+1,-1);
    unsigned long long int Anwser = fibbonancidynamic(n,dp);
    // printvector(dp,n);
    cout<<"\n";
    cout<<"Fib"<<": " <<Anwser;
    cout << "\n";
    cout << "Tabulation: " << fibbonanci_bottomup(n) << ":";
    return 0;
}