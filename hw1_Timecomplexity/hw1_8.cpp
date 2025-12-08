#include <iostream>
using namespace std;

int maximum(int arr[],int n){
    int max = arr[0];
    for(int i = 0;i<n ;i++){
        for(int j = i;j<n;j++){
            int findmax = 0;
            for(int k = i;k<j;k++){
                findmax += arr[k];
            }
            if(findmax > max){
                max = findmax;
            }
        }
    }
    return max;
}


int main(){
    int n = 5;
    int arr[n] = {5,15,20,-30,40};
    cout<<maximum(arr,n);

    return 0;
}