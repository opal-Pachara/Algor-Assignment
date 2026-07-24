#include <iostream>
#include <vector>
using namespace std;

int f(int n){
    if(n==0){
        return 2;
    }
    if(n==1){
        return 2;
    }
    if(n==2){
        return 0;
    }
    return f(n-3) + f(n-2) + f(n-1);
}

vector<int> memory(100001,-1);

int F_TD(int n){
    if(n == 1){
        return 1;
    }
    if(n == 2){
        return 2;
    }
    if(memory[n] != -1){
        return memory[n];
    }
    memory[n] = (3*F_TD(n-1)) + (2*F_TD(n-2));
    return memory[n];
}

int F_BU(int n){
    vector<int> memo(n+1,-1);
    memo[1] = 1;
    memo[2] = 2;
    for(int i = 3 ; i <= n ; i++){
        memo[i] = (3*memo[i-1]) + (2*memo[i-2]);
    }
    return memo[n];
}

int main (){
    cout << "Input n : ";
    int n; cin >> n;
    cout << "Top Down : " << F_TD(n);
    cout << "\n";
    cout << "Bottom UP : " << F_BU(n);


    return 0;
}