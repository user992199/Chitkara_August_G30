#include<iostream>
using namespace std;
int main(){
	// syntax
	// datatype * ptr = new datatype[number of variables];
	int n = 19;
	int * arr = new int[n];
	for(int i = 0; i < n; i++){
		arr[i] = 0;
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	// syntax
	// delete []address;
	delete []arr;
	for(int i = 0; i < n; i++) cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}