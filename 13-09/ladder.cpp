#include<iostream>
using namespace std;
int main(){
	int arr[3][4] = {
		{1, 2, 16, 18},
		{4, 5, 17, 19},
		{8, 9, 20, 22}
	};
	int m = sizeof(arr)/sizeof(arr[0]);
	int n = sizeof(arr[0])/sizeof(arr[0][0]);
	int key = 20;
	int i = 0, j = n-1;
	while(i < m and j >= 0){
		if(arr[i][j] == key)
			break;
		if(arr[i][j] > key)
			j--;
		else if(arr[i][j] < key)
			i++;
	} 
	if(i == m or j < 0){
		cout<<"Key is not there\n";
	}else{
		cout<<"row: "<<i+1<<"; ";
		cout<<"col: "<<j+1<<endl;
	}
	return 0;
}