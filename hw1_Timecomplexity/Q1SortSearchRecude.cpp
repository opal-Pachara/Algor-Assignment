#include <iostream>
#include <string>
using namespace std;

void insertarr(int arr[],int n){
    int i;
    for(i = 0; i < n ; i++){
        cin>>arr[i];
    }
}

void bubblesort(int arr[],int n){
    int i, j;
    for(i = 0; i < n-1 ; i++){
        for(j = 0; j < n-1 ;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printarr(int arr[],int n){
    int i;
    for(i = 0; i < n; i++){
        cout<<arr[i];
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    insertarr(arr,n);
    sort(arr,n);

    string result ="";
    for(int i = 0; i < n; i++){
        result += to_string(arr[i]);
    }
    cout<<result<<endl;

    for(int i = n-1; i >= 0;i++){
        if(result[i])
    }

    // printarr(arr,n);
    return 0;
}