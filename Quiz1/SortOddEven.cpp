#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr,int left,int right){
    int i = left;
    int pivot = arr[right];
    for(int j = left ; j< right ;j++){
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

void reversearr(vector<int> &arr,int n){
    int i;
    for(i = 0; i < n/2; i++){
        swap(arr[i],arr[n-i-1]);
    }
}

void insertEvenAndOdd(vector<int> &Oddarr,vector<int> &Evenarr,int n,int &numodd,int &numeven){
    int i;
    int num;
    numodd = 0;
    numeven = 0;
    for(i = 0; i < n; i++){
        cin>>num;
        if(num%2==0){
            Evenarr[numeven] = num;
            numeven++;
        }
        else{
            Oddarr[numodd] = num;
            numodd++;
        }
    }
}

void printOdd(vector<int> &Oddarr,int numodd){
    int i;
    for(i = 0; i < numodd; i++){
        cout<<Oddarr[i]<<" ";
    }
}

void printEven(vector<int> &Evenarr,int numeven){
    int i;
    for(i = 0 ; i < numeven ; i++){
        cout<<Evenarr[i]<<" ";
    }
}

void CheckArr(vector<int> &Oddarr,vector<int> &Evenarr, int numodd,int numeven){
    quicksort(Evenarr,0,numeven-1);
    quicksort(Oddarr,0,numodd-1);
    printOdd(Oddarr,numodd);
    reversearr(Evenarr,numeven);
    printEven(Evenarr,numeven);
}

int main(){
    int n;
    int numeven = 0;
    int numodd = 0;
    cin>>n;
    vector<int> Evenarr(n);
    vector<int> Oddarr(n);
    insertEvenAndOdd(Oddarr,Evenarr,n,numodd,numeven);
    CheckArr(Oddarr,Evenarr,numodd,numeven);
    return 0;
}