#include<iostream>
using namespace std;
// int sum(int arr[][], int n){
// int sum(int arr[][10], int n){
// int sum(int **arr, int n){
// int sum(int arr[][3], int m, int n){
// int sum(int arr[123][3], int m, int n){
// int sum(int *arr[3], int m, int n){
int sum(int (*arr)[3], int m, int n){
	int ans = 0;
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			ans+=arr[i][j];
	return ans;
}
int main(){
	int arr[][3] = {1, 2, 3, 4, 5, 6, 7};
	int m = sizeof(arr)/sizeof(arr[0]);
	int n = sizeof(arr[0])/sizeof(arr[0][0]);
	cout<<sum(arr, m, n)<<endl;

	int *p1[5], (*p2)[5];
	cout<<sizeof(p1)<<" "<<sizeof(p2)<<endl;
	return 0;
}