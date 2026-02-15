#include <iostream>
using namespace std;

int arr[10000];

void insertArr(int arr[],int n){
    int i;
    for(i = 0;i < n; i++){
        cin>>arr[i];
    }
}

void printArr(int arr[],int n){
    int i;
    for(i = 0;i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

void BubbleSort(int arr[],int n){
    insertArr(arr,n);
    int i,j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int BinarySearch(int arr[],int left, int right, int target){
    int mid = left + (right-left)/2;

    if(arr[mid]==target){
        return mid;
    }
    if(arr[mid]<target){
         return BinarySearch(arr,mid+1,right,target);
    }
    else{
        return BinarySearch(arr,left,mid-1,target);
    }
}

int main(){
    int n,target;
    cin>> n >>target;
    BubbleSort(arr,n);
    printArr(arr,n);
    cout<<BinarySearch(arr,0,n-1,target);
    return 0;
}