#include <iostream>
using namespace std;

int numodd = 0;
int numeven = 0;

int partition(int arr[],int left,int right){
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

void quicksort(int arr[],int left,int right){
    if(left<right){
        int pivot = partition(arr,left,right);
        quicksort(arr,left,pivot-1);
        quicksort(arr,pivot+1,right);
    }
}

void reversearr(int arr[],int n){
    int i;
    for(i = 0; i < n/2; i++){
        swap(arr[i],arr[n-i-1]);
    }
}

void printOdd(int Oddarr[],int Evenarr[]){
    int i;
    quicksort(Oddarr,0,numodd-1);
    for(i = 0; i < numodd; i++){
        cout<<Oddarr[i]<<" ";
    }
    quicksort(Evenarr,0,numeven-1);
    reversearr(Evenarr,numeven);
    for(i = 0 ; i < numeven ; i++){
        cout<<Evenarr[i]<<" ";
    }

}

void printEven(int Oddarr[],int Evenarr[]){
    int i;
    quicksort(Evenarr,0,numeven-1);
    for(i = 0 ; i < numeven ; i++){
        cout<<Evenarr[i]<<" ";
    }
    quicksort(Oddarr,0,numodd-1);
    reversearr(Oddarr,numodd);
    for(i = 0; i < numodd; i++){
        cout<<Oddarr[i]<<" ";
    }
}

void CheckArr(int Oddarr[],int Evenarr[]){
    if(numodd>numeven){
        printOdd(Oddarr,Evenarr);
    }
    else{
        printEven(Oddarr,Evenarr);
    }
}

void insertEvenAndOdd(int Oddarr[],int Evenarr[],int n){
    int i;
    int num;
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


int main(){
    int n;
    cin>>n;
    int Evenarr[n];
    int Oddarr[n];
    insertEvenAndOdd(Oddarr,Evenarr,n);
    CheckArr(Oddarr,Evenarr);
    return 0;
}