#include<iostream>
#include<cstring>
using namespace std;
int main(){
	// syntax
	// datatype * ptr = new datatype[number of variables];
	int n = 20;
	int * arr = new int[n];
	// cout<<sizeof(arr)<<endl;
	// n = sizeof(arr)/sizeof(arr[0]);
	memset(arr, -1, sizeof(arr[0]) * n);
	for(int i = 0; i < n; i++){
		// arr[i] = 0;
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}