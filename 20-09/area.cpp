#include<iostream>
using namespace std;
int main(){
	int *lptr, *bptr;
	int l = 10, b = 5;
	lptr = &l;
	// bptr = &b;
	cout<<(*lptr) * (*bptr)<<endl;
	return 0;
}