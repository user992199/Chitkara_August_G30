#include<iostream>
using namespace std;
void pa(int arr[], int n){
	for(int i = 0; i < n; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
void bs(int arr[], int n){
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n-1-i; j++){
			if(arr[j] > arr[j+1])
				swap(arr[j], arr[j+1]);
		}
	}
}
void bs_rec_comp(int arr[], int n, int i = 0, int j = 0){
	// base case
	if(i == n-1) return;
	if(j == n-i-1){
		bs_rec_comp(arr, n, i+1);
		return;
	}
	// recursive case
	if(arr[j] > arr[j+1])
		swap(arr[j], arr[j+1]);
	bs_rec_comp(arr, n, i, j+1);
}
int main(){
	int arr[] = {4, 6, 5, 0, 3, -2, 1, 10, 11, 8, 9, 7};
	int n = sizeof(arr)/sizeof(arr[0]);
	bs_rec_comp(arr, n);
	pa(arr, n);
	return 0;
}