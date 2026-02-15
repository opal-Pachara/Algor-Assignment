#include <iostream>
using namespace std;

void insertArr(int arr[],int n){
    int i = 0;
    for(;i < n; i++){
        cin>>arr[i];
    }
}

void MaxMin(int arr[],int n){
    int i;
    int a = arr[0],b = arr[0];
    for(i=1; i<n ;i++){
        if(a<arr[i]){
            a = arr[i];
        }
    }
    for(i=1; i<n ;i++){
        if(b>arr[i]){
            b = arr[i];
        }
    }
    cout<<a;
    cout<<"\n";
    cout<<b;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    insertArr(arr,n);
    MaxMin(arr,n);
    return 0;
}