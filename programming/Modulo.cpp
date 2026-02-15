#include <iostream>
using namespace std;

int arr[10];
int count = 0;

void insertArr(int arr[]){
    int i;
    for(i = 0; i < 10; i++){
        cin>>arr[i];
        int index = num % 42; 
        cnt[index] = 1;
    }
}

void checkNum(int arr[]){
    int i;
    for(i = 0; i < 10; i++){
        if(arr[i]%42!=0){
            count++;
        }
    }
    cout<<count;
}

int main(){
    insertArr(arr);
    checkNum(arr);
    return 0;
}