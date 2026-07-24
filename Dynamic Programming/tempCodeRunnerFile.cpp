
// vector<int> memo(100001,vector<int>(100001,-1));

// int F_DP(int n,int k){
//     if(k == 0){
//         return 1;
//     }
//     if(k == 1){
//         return 1;
//     }
//     if(k == n){
//         return 1;
//     }
//     // Check vector memo awnser
//     if(memo[n][k] != -1){
//         return memo[n][k];
//     }
//     memo[n][k] = F_DP(n-1,k) + F(n-1,k-2);
//     return memo[n][k];
// }

// long long F_BU(int n,int k){
//     vector<vector<long long> > memo(n+1,vector<long long>(k+1));
//     // intial Table
//     for(int i = 0 ; i <= n ; i++){
//         memo[i][0] = 1;
//         memo[i][1] = 1;
//         memo[i][i] = 1;
//     }
//     // Recursive Case
//     for(int i = 2; i <= n; i++){
//         for(int j = 2 ; j < i; j++){
//             memo[i][j] = memo[i-1][j] + memo[i-1][j-2];
//         }
//     }
//     // Return ค่ากลับ
//     return memo[n][k];
// }