#include <iostream>
using namespace std;

void SquareHollow(int n){
	int i,j;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			if(j == 1||j==n||n==i||i==1){
				cout<<"* ";	
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
}

void NumberTriangular(int n){
	int i,j;
	for(i = 1; i <= n; i++){
		for(j = n-1 ;j >= i; j--){
			cout<<" ";
		}
		for(j = 1; j<=i ; j++){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}

void NumberIncreasingPyramid(int n){
	int i,j;
	for(i = 1 ; i<=n ;i++){
		for(j = 1 ; j<=i ;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

void NumberChangingPyramid(int n){
	int i,j;
	int number = 1;
	for(i = 1; i <= n; i++){
		for(int j = 1; j <=i ; j++){
			cout<<number<<" ";
			number++;
		}
		cout<<endl;
	}
}

void ZeroOneTriangle(int n){
	int i,j;
	for(i = 1; i<=n ; i++){
		for(j = i; j <= (i+i)-1 ; j++){
			if(j%2 == 1){
				cout<<"1 ";
			}
			else{
				cout<<"0 ";
			}
		}
		cout<<endl;
	}
}

void PalindromeTriangular(int n){
	int i ,j;
	for(i = 1; i <= n ; i++){
		//print space
		for(j = n-1 ;j >= i; j--){
			cout<<"  ";
		}
		
		for(j = i; j>=1;j--){
			cout<<j<<" ";
			}
			
		for(j = 2; j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

void RhombusPattern(int n){
	int i,j;
	for(i = 1; i <= n; i++){
		for(j = n-1; j>=i ;j--){
			cout<<"  ";
		}
		for(j = 1; j<=n ; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

void DiamondPattern(int n){
	int i,j;
	for(i = 1; i <= n; i++){
		for(j = n-1; j >= i;j--){
			cout<<"  ";
		}
		for(j = 1; j<=(i*2)-1 ;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	for(i = 2; i <= n; i++){
		for(j = 1; j < i ;j++){
			cout<<"  ";
		}
		for(j = (n*2)-i; j>=i ;j--){
			cout<<"* ";
		}
		cout<<endl;
	}
}

void SquareFillPattern(int n){
	int i,j;
	for(i = 1;i <=n ;i++){
		for(j = 1;j<=n;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

void RightHalfPyramid(int n){
	int i,j;
	for(i = 1;i<=n;i++){
		for(j = 1;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

void RevRightHalfPyramid(int n){
	int i,j;
	for(i = 1; i <= n ;i++){
		for(j = 1;j <=n-i+1; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

void LeftHalfPyramid(int n){
	int i,j;
	for(i = 1; i <= n; i++){
		for(j = 1;j<=n-i;j++){
			cout<<"  ";
		}
		for(j = 1;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

void RevLeftHalfPyramid(int n){
	int i,j;
	for(i = 1; i<=n ; i++){
		for(j = 1; j<i;j++){
			cout<<"  ";
		}
		for(j = n;j>=i;j--){
			cout<<"* ";
		}
		cout<<endl;
	}
}

void KPattern(int n){
	int i,j;
	for(i = 1; i <= n;i++){
		for(j = n; j >= i ;j--){
			cout<<"* ";
		}
		cout<<endl;
	}
	for(i = 2; i <= n;i++){
		for(j = 1; j <= i ;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

void TriStarPattern(int n){
	int i,j;
	for(i = 1; i <= n;i++){
		for(j = n; j > i ;j--){
			cout<<" ";
		}
		for(j = 1;j <= i; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

void RevNumTriPattern(int n){
	int i,j;
	for(i = 1; i<=n ;i++){
		for(j = 1; j<i ;j++){
			cout<<" ";
		}
		for(j = i; j<=n ;j++){
			cout<<j<<" ";
                  
		}
		cout<<endl;
	}
}

void MirImgTriPattern(int n){ // seen anwser
	int i,j;
	for(i = 1; i<=n ;i++){
		for(j = 1; j<i ;j++){
			cout<<" ";
		}
		for(j = i; j<=n ;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}

	for(i = n-1; i>=1 ;i--){
		for(j = 1; j<i ;j++){
			cout<<" ";
		}
		for(j = i; j<=n ;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

void HollowTriPattern(int n){
	int i,j;
	for(i = 1; i<=n ;i++){
		for(j = 1; j<=n-i ;j++){
			cout<<" ";
		}
		for(j = 1; j<=n ;j++){
			if(j==1||j==i||i==n){
				cout<<"* ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
}

void RightPascalTri(int n){
	int i,j;
	for(i = 1; i<=n ;i++){
		for(j = 1; j <=i ; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	for(i = 2; i<=n ;i++){
		for(j = n; j >= i ; j--){
			cout<<"* ";
		}
		cout<<endl;
	}
}

void HollowRevTriPattern(int n){
	int i,j;
	for(i = 1; i <= n; i++){
		for(j = 1; j < i; j++){
			cout<<" ";
		}
		for(j = n; j>=i ;j--){
			if(j==i||j==n||i==1){
				cout<<"* ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	HollowRevTriPattern(n);
	return 0;
}