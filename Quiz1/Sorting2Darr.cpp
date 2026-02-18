#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr,int left,int right){
    int i = left;
    int pivot = arr[right];
    for(int j = left ; j < right ; j++){
        if(arr[j]<=pivot){
            swap(arr[i],arr[j]);
            i++;
        }
    }
    swap(arr[i],arr[right]);
    return i;
}

void quicksort(vector<int> &arr,int left,int right){
    if(left<right){
        int pivot = partition(arr,left,right);
        quicksort(arr,left,pivot-1);
        quicksort(arr,pivot+1,right);
    }
}

void insertArr(vector<int> &arr,int m,int n){
    int i;
    for(i = 0; i < m*n ; i++){
        cin>>arr[i];
    }
}

void printArr(vector<int> &arr, int m, int n) {
    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                cout << arr[i * n + j] << " ";
            }
        } else {
            for (int j = n - 1; j >= 0; j--) {
                cout << arr[i * n + j] << " ";
            }
        }
        cout << "\n";
    }

    int centerIndex = (m * n) / 2;
    cout << arr[centerIndex] << endl; 
}

int main(){
    int m,n;
    cin >> m >> n;
    vector<int> arr(m*n);
    insertArr(arr,m,n);
    quicksort(arr,0,m*n-1);
    printArr(arr,m,n);
    return 0;
}