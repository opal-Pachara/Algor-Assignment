#include <iostream>
using namespace std;

int findMax(int a, int b) {
    if (a > b) {
        return a;
    }
    else{
        return b;
    } 
}

int findMaxThree(int a, int b, int c) {
    return findMax(findMax(a, b), c);
}

int Max_Subarray_Sum(int arr[], int n) {
    int Lmss,Rmss;
    if (n == 1) {
        return arr[0];
    }

    int m = n / 2;
    Lmss = Max_Subarray_Sum(arr, m);
    Rmss = Max_Subarray_Sum(arr + m, n - m);

    int lsum = -1000, rsum = -1000, sum = 0; 

    for(int i = m; i < n; i++){
        sum += arr[i];
        rsum = findMax(rsum,sum);
    }

    sum = 0;
    for(int i = m-1; i>=0 ; i--){
        sum += arr[i];
        lsum = findMax(lsum,sum);
    }
    return findMaxThree(Lmss, Rmss, lsum + rsum);
}

void insertarr(int arr[],int n){
    int i = 0;
    for(; i < n ; i++){
        cin>>arr[i];
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    // {16, -25, 2, -54, 36, 9, -12, 66}
    insertarr(arr,n);

    n = sizeof(arr) / sizeof(arr[0]);
    cout<<n<<"\n";
    cout<<Max_Subarray_Sum(arr, n);
    
    return 0;
}