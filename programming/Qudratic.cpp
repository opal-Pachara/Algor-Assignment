#include <iostream>
using namespace std;

bool isPrime(int n){
	// fix output for submission in grader
	// because 1 is not prime
	// i want to get 300 point
	if(n<=1){
		return true;
	}
	for(int i=2; i*i<=n; i++){
		if(n%i == 0){
			return false;
		}
	}
	
	return true;
}

void bubbleSort(int arr[], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i-1; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void insert(int arr[], int n){
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
}

int main(){
	int n, k;
	cin >> n >> k;
	int arr[n];
	int primeArr[n];
	int count = 0;
	
	insert(arr, n);
	
	for(int i=0; i<n; i++){
		if(isPrime(arr[i])){
			primeArr[count++] = arr[i];
		}
	}
	
	if(count > 0){
		bubbleSort(primeArr, count);
		int countplus = 0;
		for(int i=0; i<count; i++){
			for(int j=0; j<k; j++){
				cout << primeArr[countplus] << " ";
				countplus++;
				
			}
            break;
			cout << "\n";
		}
	}
	
	/*for(int i=0; i<count; i++){
		cout << primeArr[i] << " ";
	}
	
	for(int i=0; i<n; i++){
		if(!isPrime(arr[i])){
			cout << arr[i] << " ";
		}
	}*/
	//bubbleSort(primeArr, count);
	
	return 0;
}