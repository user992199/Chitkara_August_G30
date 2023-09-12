#include<iostream>
using namespace std;
int main(){
	// int arr[2][4] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
	// int arr[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
	// int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
	// int arr[2][4] = {{1, 2, 3}, {5, 6, 7}};
	// int arr[3][5] = {1, 2, 3, 5, 6, 7};
	// int arr[3][5] = {{1, 2}, 3, 5, 6, 7};
	// int arr[3][5] = {1, 2, 3, {5, 6, 7}};
	// int arr[3][5] = {1, 2, 3, 4, 5, {5, 6, 7}};
	int arr[5][5] = {{1, 2, 3}, 4, 5, 6, 7, 8, {}, {5, 6, 7}, 2, 3, 4};
	int row = sizeof(arr)/sizeof(arr[0]);
	int col = sizeof(arr[0])/sizeof(arr[0][0]);
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
	return 0;
}