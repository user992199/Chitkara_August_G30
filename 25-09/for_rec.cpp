#include<iostream>
using namespace std;
void for_loop(int n){
	for(int i = 1; i <= n; i++){
		cout<<i<<" ";
	}
	cout<<endl;
}
void for_rec(int n, int i = 1){
	// base case
	if(i > n){
		cout<<endl;
		return;
	}
	// recursive case
	cout<<i<<" ";
	for_rec(n, i+1);
}
int main(){
	for_loop(10);
	for_rec(10);
	return 0;
}