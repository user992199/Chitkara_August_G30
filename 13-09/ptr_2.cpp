#include<iostream>
using namespace std;
int main(){
	int arr[10] = {123, 34, 12, 65, 1,23 };
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	for(int i = 0; i < n; i++){
		cout<<*(arr + i)<<" ";
	}cout<<endl;
	int *p = &arr[0]; // arr
	for(int i = 0; i < n; i++){
		cout<<*(p + i)<<" ";
	}cout<<endl;
	for(int i = 0; i < n; i++){
		cout<<p[i]<<" ";
	}cout<<endl;
	// arr = p;
	cout<<sizeof(arr)<<endl;
	cout<<sizeof(p)<<endl;
 	return 0;
}