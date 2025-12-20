#include <iostream>
using namespace std;

void insetA(int A[],int n){
    int i;
    for(i = 0; i < n; i++){
        cin>>A[i];
    }
}

void insertB(int B[],int n){
    int i;
    for(i = 0; i < n; i++){
        cin>>B[i];
    }
}

void Intersec(int A[],int B[],int n){
    int i,j;
    for(i = 0; i < n ; i++){
        for(j = 0; j < n;j++){
            if(A[i]==B[j]){
            cout<<A[i]<<" ";
        }
        }
    }
    cout<<endl;
}

void Union(int A[],int B[],int n){
    int i,j;
    
    for(i = 0; i < n; i++){
        cout<<A[i]<<" ";
    }

    for(i = 0; i < n ; i++){
        int samenum = 1;
        for(j = 0; j < n;j++){
            if(A[j] == B[i]){
                samenum = 0;
                break;
            }          
        }
        if(samenum == 1){
            for(j = 0; j < i; j++){
                if(B[i]==B[j]){
                    samenum = 0;
                    break;
                }
            }
        }
        if(samenum == 1){
            cout<<B[i]<<" ";
        }
    }
}

int main(){
    int n;
    cin>>n;
    int A[n];
    int B[n];
    insetA(A,n);
    insertB(B,n);
    Intersec(A,B,n);
    Union(A,B,n);
    return 0;
}