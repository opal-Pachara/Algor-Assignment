#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> >memo(1000,vector<int>(1000,0));
int p(int a,int b){
    if(memo[a][b] !=0){
        return memo[a][b];
    }if(b<1){
        memo[a][b] = 1;
        return memo[a][b];
    }if(b==0){
        memo[a][b] = a;
        return memo[a][b];
    }else{
        if(b%2==0){
            memo[a][b] = p(a,b/2)*p(a,b/2);
            return memo[a][b];
        }else{
            memo[a][b] = a*p(a,b/2)*p(a,b/2);
            return memo[a][b];
        }
    }
}
int main(int argc, char** argv) {
    int n,k;
    cin>>n>>k;
    cout<<p(n,k)<<endl;
    for(int i=n;i<=n;i++){
         for(int j=0;j<=k;j++){
            if(memo[i][j]!=0){
                cout<<memo[i][j]<<" ";
            }else{
                cout<<"." << " ";
            }
        }cout<<endl;
    }   
    return 0;
}