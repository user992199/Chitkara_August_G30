#include<iostream>
using namespace std;
int main(){
	int arr[10];
	// cout<<sizeof(arr)<<endl;
	// cout<<*(arr)<<" "<<arr[0]<<endl;
	// cout<<*(arr+1)<<" "<<arr[1]<<endl;
	// cout<<arr+2<<endl;
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}