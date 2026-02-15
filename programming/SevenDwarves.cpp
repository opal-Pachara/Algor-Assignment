#include <iostream>
#include <algorithm>
using namespace std;

int partition(int arr[],int left,int right){
	int i = left;
	int pivot = arr[right];
	for(int j = left;j < right;j++){
		if(arr[j] <= pivot){
			swap(arr[i],arr[j]);
			i++;
		}
	}
	swap(arr[i],arr[right]);
	return i;
}

void quicksort(int arr[],int left,int right){
	if(left < right){
		int pivot = partition(arr,left,right);
		quicksort(arr,left,pivot-1);
		quicksort(arr,pivot,right);
		
	}
}




int main(){
	int k;
	cin>>k;
	int temp_num[k];
	for(int i = 0;i < k;i++){
		cin>>temp_num[i];
	}
	int n;
	cin>>n;
	int num[n];
	int h[n];
	int m[n];
	int temp[n];

	for(int i = 0;i < n;i++){
		cin>>num[i];
		cin>>h[i];
		cin>>m[i];
		temp[i] = (h[i] * 60) + m[i];
	}

	int temp_seq = 0;
	int min = 1000;
	for(int i = 0;i < n;i++){
		if(temp[i] > 0){
			if(temp[i] < min){
				min = temp[i];
				temp_seq = i;
			}
		}
	}
	cout<<num[temp_seq]<<" ";
	cout<<temp_seq+1<<endl;
    return 0;
}