#include<iostream>
using namespace std;
int main(){
	// new int;
	int * p = new int;
	*p = 15;
	int &x = *p;
	x *= 2;
	*p = 13;
	cout<<p<<endl;
	p = new int;
	// x *= 2;
	cout<<&x<<endl;
	cout<<p<<endl;
	cout<<x<<endl;
	cout<<*p<<endl;
	return 0;
}