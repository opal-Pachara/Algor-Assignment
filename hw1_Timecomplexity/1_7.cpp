#include <iostream>
using namespace std;

void insertarr(int arr[],int n){
    int i = 0;
    for(; i < n; i++){
        cin>>arr[i];
    }
}

int checktarget(int arr[],int n,int target){
    int i,j;
    int found = 0;
    for(i = 0; i<n ; i++){
        for(j = i+1; j <n; j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<" "<<arr[j]<<"\n";
                found = 1;
            }
        }
    }
    if(found == 0){
        cout<<"-1";
    }
}

int main(){
    int n,target;
    cin>>n;
    int arr[n];
    cin>>target;
    insertarr(arr,n);
    cout<<checktarget(arr,n,target);
    return 0;
}