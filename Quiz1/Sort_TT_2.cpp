#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& arr,int left,int right){
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

void QuickSort(vector<int>& arr,int left,int right){
    if(left < right){
        int pivot = partition(arr,left,right);
        QuickSort(arr,left,pivot-1);
        QuickSort(arr,pivot+1,right);
    }
}

void Insert(vector<int> &a,vector<int> &b,int &numa,int &numb,int n){
    int i;
    int num;
    for(i = 0; i < n; i++){
        cin>>num;
        if(num%5 == 0){
            a[numa] = num;
            numa++;
        }
        else{
            b[numb] = num;
            numb++;
        }
    }
}

void reverseArr(vector<int> &arr,int n){
    int i;
    for(i = 0; i < n/2; i++){
        swap(arr[i],arr[n-i-1]);
    }
}

void printaAndB(vector<int> &a,vector<int> &b,int &numa,int &numb,int n){
    int i;
    QuickSort(a,0,numa-1);
    for(i = 0; i < numa; i++){
        cout<<a[i]<<" ";
    }
    QuickSort(b,0,numb-1);
    reverseArr(b,numb);
    for(i = 0;i < numb; i++){
        cout<<b[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int numa = 0;
    int numb = 0;
    vector<int> a(n);
    vector<int> b(n);
    Insert(a,b,numa,numb,n);
    printaAndB(a,b,numa,numb,n);
    return 0;
}