#include <iostream>
using namespace std;

int factorial(int n){
    int sumFact = 1;
    int i;
    for(i = 1 ; i <= n ; i++){
        sumFact = sumFact * i;
    }
    return sumFact;
}

int factorialRec(int n){
    if(n==0){
        return 1;
    }
    else{
        return n * factorialRec(n-1);
    }
}


void Nearnumber (int P,int Q,int n){
    if(n<=3){
        P = factorial(n);
        Q = factorial(n-1);
    }
    else{
        P = factorial(n);
        Q = factorial(n-1) * 2;
    }
    cout<<P-Q;
}

int main(){
    int n;
    int P,Q;
    cin>>n;
    Nearnumber(P,Q,n);
    return 0;
}