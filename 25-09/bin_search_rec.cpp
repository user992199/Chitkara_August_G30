#include<iostream>
using namespace std;
int bin_src(int arr[], int n, int key){
	int s = 0, e = n-1;
	while(s <= e){
		int m = s + (e - s)/2;
		if(arr[m] == key) return m;
		else if(arr[m] > key) e = m-1;
		else s = m+1;
	}
	return -1;
}
int bin_src_rec(int arr[], int s, int e, int key){
	// base case
	if(s > e) return -1;
	// recursive case
	int m = s + (e - s)/2;
	if(arr[m] == key) return m;
	if(arr[m] > key) return bin_src_rec(arr, s, m-1, key);
	return bin_src_rec(arr, m+1, e, key);
}
int main(){
	int arr[] = {1, 4, 12, 53, 63, 67, 68, 90, 110, 112};
	int n = sizeof(arr)/sizeof(arr[0]);
	int key = -1;
	cout<<bin_src(arr, n, key)<<endl;
	cout<<bin_src_rec(arr, 0, n-1, key)<<endl;
	return 0;
}