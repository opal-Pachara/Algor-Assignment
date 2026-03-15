#include <iostream>
#include <vector>
using namespace std;


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
    printvector(dp,n);
    cout<<"\n";
    cout<<"Fib"<< n << ": " <<Anwser;
    return 0;
}