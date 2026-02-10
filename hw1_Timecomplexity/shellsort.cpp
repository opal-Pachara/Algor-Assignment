#include <iostream>
using namespace std;

void insertarr(int arr[],int n){
    int i = 0;
    for(; i<n ; i++){
        cin>>arr[i];
    }
}

void printarr(int arr[],int n){
    int i;
    for(i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}


void bubblesort(int arr[],int n){
    int i,j;
    for(i = 0; i < n-1 ; i++){
        for(j = 0; j < n-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    insertarr(arr,n);
    cout<<"Not Sorting : ";
    printarr(arr,n);
    cout<<endl;
    bubblesort(arr,n);
    cout<<"Sorting : ";
    printarr(arr,n);

    return 0;
}