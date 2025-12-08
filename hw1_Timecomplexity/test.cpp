#include <iostream>
using namespace std;

void insertarr(int arr[],int n){
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
}

void printarr(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int subsequebce(int arr[],int n){
    int findmax = arr[0];
    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            int sum = 0;
            for(int k = i;k<=j;k++){
                sum += arr[k];
                // cout<<"loop(1)  "<<k<<": "<<sum<<"   findmax: "<<findmax<<endl;
                if(sum > findmax){
                    findmax = sum;
                    // cout<<"loop  "<<k<<": "<<findmax<<endl;
                }
            }
        }
    }
    return findmax;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    insertarr(arr,n);
    printarr(arr,n);
    cout<<subsequebce(arr,n);

    return 0;
}