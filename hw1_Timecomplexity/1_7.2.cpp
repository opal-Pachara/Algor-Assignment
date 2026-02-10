#include <iostream>
using namespace std;

void InserArr(int arr[],int n){
    int i;
    for(i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
}

int FindTarget(int arr[],int n,int target){
    InserArr(arr,n);
    int i,j;
    bool find = false;
    for(i = 0; i < n; i++){
        for(j = i+1 ; j < n; j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<" "<<arr[j];
                cout<<"\n";
                find = true;
            }
        }
    }
    if(!find){
        return -1;
    }
}

int main(){
    int n,target;
    cin >> n >> target;
    int arr[n];
    cout<<FindTarget(arr,n,target);
    return 0;
}