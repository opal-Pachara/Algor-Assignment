#include <iostream>
using namespace std;

int sigma1(int n){
    int sumpow = 1;
    int sum = 1;
    sumpow = n*((n+1)*(2*n+1))/6;
    sum = n*(n+1)/2;
    return sumpow+sum;
}

int DoubleSigma(int n){
    int i,sum = 0;
    for(i = 1 ; i <= n; i++){
        for(j = 1; j <= i ; j++){
            sum += j;
        }
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    cout<<sigma1(n);
    return 0;
}