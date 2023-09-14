#include<iostream>
using namespace std;
// int sum(int arr[]){
// int sum(int arr[7]){
// int sum(int arr[10]){
// int sum(int arr[3]){
int sum(int *arr, int n){
	int ans = 0;
	for(int i = 0; i < n; i++)
		ans+=arr[i];
	return ans;
}
int main(){
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<sum(arr, n)<<endl;
	return 0;
}