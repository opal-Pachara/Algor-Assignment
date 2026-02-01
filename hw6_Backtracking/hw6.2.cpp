#include <iostream>
using namespace std;

void print_sol(int x[],int A[],int n,int target){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(x[i] == 1){
            sum = sum + A[i-1];
        }
    }
    if(sum == target){
        for(int i = 1; i <= n; i++){
            if(x[i]==1){
                cout<<A[i-1]<<" ";
            }
        }
        cout<<"\n";
    }
}

void subset1(int x[],int A[],int l,int r,int target){
    if(l == r){
        print_sol(x,A,r,target);
    }
    else{
        x[l+1] = 1;
        subset1(x,A,l+1,r,target);
        x[l+1] = 0;
        subset1(x,A,l+1,r,target);
    }
}

void insertarrA(int A[],int n){
    int i;
    for(i = 0; i < n; i++){
        cin>>A[i];
    }
}

int main(){
    int n = 5;
    int x[n+1],A[n];
    int target;
    cin>>target;
    insertarrA(A,n);
    subset1(x,A,0,n,target);
    return 0;
}