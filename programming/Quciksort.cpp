#include <iostream>
using namespace std;

int pcount = 0;
int npcount = 0;

bool isPrime(int n) {
    if (n == 2){
        return true;
    }
    if (n % 2 == 0){
        return false;
    }
    int limit = sqrt(n);
    for (int i = 3; i <= limit; i += 2) {
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int partition(int arr[],int left ,int right){
    int i = left;
    int pivot = arr[right];
    for(int j = left; j<right;j++){
        if(arr[j]<=pivot){
            swap(arr[i],arr[j]);
            i++;
        }
    }
    swap(arr[i],arr[right]);
    return i;
}

void quicksort(int arr[],int left,int right){
    if(left < right){
        int pivot = partition(arr,left,right);
        quicksort(arr,left,pivot-1);
        quicksort(arr,pivot+1,right);
    }
}

void insertArrPrimeandNonPrime(int prime[],int nonprime[],int n){
    int i;
    int num;
    for(i = 0 ; i < n; i++){
        cin>>num;
        bool check = isPrime(num);
        if(check){
            prime[pcount] = num;
            pcount++;
        }
        else{
            nonprime[npcount] = num;
            npcount++;
        }
    }
}

void printArr(int prime[],int nonprime[]){
    int i;
    for(i = 0; i < pcount; i++){
        cout<<prime[i]<<" ";
    }
    for(i = 0; i < npcount; i++){
        cout<<nonprime[i]<<" ";
    }
}


int main(){
    int n;
    cin>>n;
    int prime[n];
    int nonprime[n];
    insertArrPrimeandNonPrime(prime,nonprime,n);
    quicksort(prime,0,pcount);
    printArr(prime,nonprime);
    return 0;
}