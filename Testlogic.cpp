#include <iostream>
#include <vector>
using namespace std;

void insertarr(vector<int> &arr, int n){
    int i;
    for(i = 0 ; i < n; i++){
        cin>>arr[i];
    }
}

void CheckNumber(vector<int> &arr,int n){
    int i;
    bool check = false;
    for(i = 0 ; i < n-1 ; i++){
        while(arr[i]+1<arr[i+1]){
            arr[i]++;
            cout<<arr[i]<<" ";
            check = true;
        }
    }
    if(!check){
        cout<<"[]";
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    insertarr(arr,n);
    CheckNumber(arr,n);
    return 0;
}