#ifndef ALGOR
#define ALGOR
#include <vector>

// ประกาศฟังก์ชัน (ไม่ใส่ปีกกาขยายความ)

template <typename T>
void medianOfThree(int left, int right, std::vector<T>& arr) {
    int mid = left + (right - left) / 2;
    if (arr[mid] < arr[left]) {
        std::swap(arr[left], arr[mid]);
    }
    if (arr[right] < arr[left]) {
        std::swap(arr[left], arr[right]);
    }
    if (arr[right] < arr[mid]) {
        std::swap(arr[mid], arr[right]);
    }
    std::swap(arr[mid], arr[right]);
}

template <typename T>
int partition(int left,int right,std::vector<T>& arr){
    medianOfThree(left,right,arr); // Swap Pivot 
    T pivot = arr[right];
    int i = left;
    for(int j = left; j < right ; j++){
        if(arr[j] <= pivot){
            std::swap(arr[i],arr[j]);
            i++;
        }
    }
    std::swap(arr[i],arr[right]);
    return i;
}

template <typename T>
void QuickSort(int left,int right,std::vector<T>& arr){
    if(left < right){
        int pivot = partition(left,right,arr);
        QuickSort(left,pivot-1,arr);
        QuickSort(pivot+1,right,arr);
    }
}

inline void Sort(){}

template<typename T,typename... Args>
void Sort(std::vector<T>& array , Args&&... args) {
    QuickSort(0, array.size() - 1, array);
    Sort(std::forward<Args>(args)...);
}

long long fibonacci(int n);
unsigned long long int Factorial(int n);

#endif