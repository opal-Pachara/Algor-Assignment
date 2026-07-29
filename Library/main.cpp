#include <iostream>
#include <vector>
#include "algor.h"


int main(){
    std::vector<int> arr{0,9,2,7,5,4,2};
    BubbleSort(arr);
    reverseVector(arr);
    printVector(arr);

    // for(auto i : arr){
    //     std::cout << i << " ";
    // }
    // int arr[] = {9,7,8,2,0,1};
    // BubbleSort(arr);
    // for(auto arr : i){
    //     cout << i << " ";
    // }
    // print_jack();
    // std::cout << Factorial(10) << "\n";
    // print();
    // std::cout << find_min(2,find_min(3,1));

    return 0;
}