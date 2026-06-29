#include <iostream>
#include <vector>
using namespace std;

vector<int> Vector() {
    int n;
    cout << "Input Vector Size : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Input Data " << "(" << arr.size() << ") : ";
    for(size_t i = 0 ; i < arr.size() ; i++){
      cin >> arr[i];
    }
    cout << "\n";
    return arr;
}

int partition(vector<int>& arr,int left,int right){
    int i = left;
    int pivot = arr[right];
    cout << "Pivot : " << pivot << "\n";
    for(int j = left ; j < right ; j++){
        if(arr[j]<=pivot){
            swap(arr[i],arr[j]);
            i++;
        }
    }
    swap(arr[i],arr[right]);
    return i;
}

void PrintPartition(vector<int> arr,int left ,int right){
  cout << "Current Partition [" << left << " , " << right << "] : ";
        for(int k = left; k <= right; k++) {
            cout << arr[k] << " ";
        }
        cout << "\n";
}

void QuickSort(vector<int>& arr,int left,int right){
    if(left < right){
        PrintPartition(arr,left,right);
        int pivot = partition(arr,left,right);
        QuickSort(arr,left,pivot-1);
        QuickSort(arr,pivot+1,right);
    }
}

vector<int> QuickSort(vector<int> arr) {
    QuickSort(arr, 0, arr.size() - 1); 
  return arr; 
}

void PrintVector(const vector<int>& arr){
    for(int i = 0 ;i < arr.size(); i++){
      cout << arr[i] << " ";
    }
  cout << "\n";
}

vector<int> ReverseVector(vector<int> arr){
  cout << "Sort Vector : ";
  PrintVector(arr);
  for(size_t i = 0 ; i < arr.size()/2; i++){
    swap(arr[i],arr[arr.size()-i-1]);
  }
  cout << "Reverse Vector : ";
  return arr;
}

int main(){
  PrintVector(ReverseVector(QuickSort(Vector())));
  return 0;
} 