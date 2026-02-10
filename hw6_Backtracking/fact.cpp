#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i;
    int fact = 1;

    for(i = 1; i <= n; i++){
        fact = fact * i;
    }
    
    cout<<"Factorial is : "<<fact;

    return 0;
}