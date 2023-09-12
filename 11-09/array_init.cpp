#include<iostream>
using namespace std;
int main(){
	// int arr[5] = {1, 2, 3, 4, 5};
	// int arr[10] = {1, 2, 3, 4, 5};
	// int arr[5] = {0};
	// int arr[5] = {1};
	// int arr[5] = {};
	// int arr[] = {1, 2, 3, 4, 5};
	// int arr[] = {};
	// int arr[];
	// int n1 = 5;
	// const int n1 = 5;
	// int arr[n1] = {1, 2, 3, 4, 5, 6, 7, 8};
	// cout<<arr<<endl;
	int arr[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<n<<endl;
	for(int i = 0; i < n+5; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}