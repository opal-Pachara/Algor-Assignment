#include <iostream>
#include <vector>
#include <ranges>

std::vector<int> OddVector,EvenVector;

int BinarySearch(int left,int right,std::vector<int>& arr, int target){
    if(left > right){
        return -1;
    }
    int mid = left + (right - left)/2;
    if(arr[mid] == target){
        return mid;
    }
    if(arr[mid] < target){
        return BinarySearch(mid+1,right,arr,target);
    }
    else{
        return BinarySearch(left,mid-1,arr,target);
    }
}

int medianOfThreePivot(int left, int right,std::vector<int>& arr) {
    int mid = left + (right - left) / 2;
    
    if (arr[left] > arr[mid]){
        std::swap(arr[left], arr[mid]);
    } 
    if (arr[left] > arr[right]){
        std::swap(arr[left], arr[right]);
    }
    if (arr[mid] > arr[right]){
        std::swap(arr[mid], arr[right]);
    }
    std::swap(arr[mid], arr[right - 1]);
    return arr[right - 1];
}

int patition(int left,int right ,std::vector<int> &array){
    int pivot = medianOfThreePivot(left,right,array);
    int i = left;
    for(int j = left ; j < right ; j++){
        if(array[j]<=pivot){
            std::swap(array[i],array[j]);
            i++;
        }
    }
    std::swap(array[i],array[right]);
    return i;
}

void QuickSort(int left, int right ,std::vector<int> &array){
    if(left < right){
        int pivot = patition(left,right,array);
        QuickSort(left,pivot-1,array);
        QuickSort(pivot+1,right,array);
    }
}

void Sort(){
}

template<typename... Args>
void Sort(std::vector<int>& array , Args&... args) {
    QuickSort(0, array.size() - 1, array);
    Sort(args ...);
}

void insertNumber(){
    int sizeVector; std::cin >> sizeVector;
    for(int i = 0 ; i < sizeVector ; i++){
        int number; std::cin >> number;
        if((number%2) == 0){
            EvenVector.push_back(number);
        }
        else{
            OddVector.push_back(number);
        }
    }
}

void printVector(std::vector<int> &array, bool reverse = 0){
    if(!reverse){
        for(auto i : array){
            std::cout << i << " ";
        }
    }
    else{
        for(int i = array.size()-1 ; i >= 0 ; i--){
            std::cout << array[i] << " ";
        }
    }
}

void checksizeVectorAndprint(){
    if(OddVector.size() > EvenVector.size()){
        printVector(OddVector,false);
        printVector(EvenVector,true);
    }
    else{
        printVector(EvenVector,false);
        printVector(OddVector,true);
    }
}

void Solve(){
    insertNumber();
    Sort(OddVector,EvenVector);
    checksizeVectorAndprint();
}

int main(){
    Solve();
    return 0;
}