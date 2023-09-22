#include<iostream>
using namespace std;
void pn(int n){ // 10 9 8 7 6 5 4 3 2 1
	// base case
	if(!n) return;
	// recursive case
	cout<<n<<" ";
	pn(n-1);
}
void p1n(int n){ // 1 2 3 4 5 6 7 8 9 10
	// base case
	if(!n) return;
	// recursive case
	p1n(n-1);
	cout<<n<<" ";
}
int main(){
	int n = 10;
	p1n(10);
	cout<<endl;
	return 0;
}