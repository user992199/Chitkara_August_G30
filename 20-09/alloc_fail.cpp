#include<iostream>
using namespace std;
int main(){
	// int * arr = new int[1000000000];
	// cout<<arr[999999999]<<endl;
	int * arr;
	arr = new int[100000000];
	for(int i = 0; i < 100; i++){
		delete []arr;
		arr = new int[100000000];
	}
	cout<<arr[99999999]<<endl;
	return 0;
}