#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int arr[] = {10, 9, 8, 7, 6, 4, 2, 1, -123, 324, 563, -1234};
	int n = sizeof(arr)/sizeof(int);
	sort(arr, arr+n);
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}