#include <iostream>
using namespace std;

void ChristmassTree(int n){
    int i,j;
    for(i = 1; i<=n ; i++){
        for(j = 1;j < n-i+1;j++){
            cout<<"  ";
        }
        for(j = 1; j <= (i*2)-1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i = 2; i<=n ; i++){
        for(j = 1;j < n-i+1;j++){
            cout<<"  ";
        }
        for(j = 1; j <= (i*2)-1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i = 2; i<=n ; i++){
        for(j = 1;j < n-i+1;j++){
            cout<<"  ";
        }
        for(j = 1; j <= (i*2)-1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(i = 1; i <= n; i++){
        for(j = 1;j < n;j++){
            cout<<"  ";
        }
        for(j = i; j <=i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    ChristmassTree(n);
    return 0;
}