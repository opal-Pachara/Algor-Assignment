#include <iostream>
using namespace std;

void insertarr(int arr[],int n){
    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }
}

void sumtarget(int arr[],int n,int target){
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]+arr[j] == target){
                cout<<arr[i]<<" "<<arr[j]<<" "<<endl;
            }
        }
    }
}


int main(){
    int n,target;
    cin>>n;
    int arr[n];

    insertarr(arr,n);
    cin>>target;
    sumtarget(arr,n,target);

    return 0;
}
