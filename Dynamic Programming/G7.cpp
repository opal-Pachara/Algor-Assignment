#include <iostream>
#include <vector>
using namespace std;

int G7(int n,vector<int> &memo){
    if(n==0){
        return 0;
    }
    if(n==1||n==2){
        return 1;
    }
    if(memo[n] == -1){
        memo[n] = G7(n-1,memo) + G7(n-2,memo) - G7(n-3,memo);
    }
    return memo[n];
}

int main(){
    int n;
    cin>>n;
    vector<int> memo(n+1,-1);
    cout<<G7(n,memo);
    return 0;
}