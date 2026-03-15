#include <iostream>
using namespace std;

int LinearSearch(int arr[],int n,int target){
    int i;
    for(i = 0; i < n; i++){
        if(arr[i]==target){
            return i;
            break;
        }
    }
}

int BinarySearch(int arr[],int left,int right,int target){
    int mid = left + (right - left) / 2;
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
    int n;
    return 0;
}