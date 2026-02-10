#include <iostream>
using namespace std;

bool CheckArr(int arr[],int n){
    if(n<=1){
        return true;
    }
    if(arr[n-2]>arr[n-1]){
        return false;
    }
    return CheckArr(arr,n-1);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n;i++){
        cin>>arr[i];
    }

    if(CheckArr(arr,n)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}