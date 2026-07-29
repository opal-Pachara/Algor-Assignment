#include "algor.h"
#include <iostream>
#include <vector>

// void BubbleSort(int arr[]){
//     for(int i = 0 ; i < arr.size() ; i++){
//         for(int j = 0 ; j < arr.size()-i-1; j++){
//             if(arr[j] > arr[j+1]){
//                 std::swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }


long long fibonacci(int n){
    if(n <= 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    std::vector<long long> Tabulation(n+1);
    Tabulation[0] = 0,Tabulation[1] = 1;
    for(int i = 2 ; i <= n ; i++){
        Tabulation[i] = Tabulation[i-1] + Tabulation[i-2];
    }
    return Tabulation[n];
}

unsigned long long int Factorial(int n){
    unsigned long long int sumfactorial = 1;
    for(int i = 1 ; i <= n ; i++){
        sumfactorial = sumfactorial * i;
    }
    return sumfactorial;
}
