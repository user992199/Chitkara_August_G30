#include<iostream>
using namespace std;
int main(){
	int *p = new int;
	*p = 10;
	cout<<p<<" -> "<<*p<<endl;
	// syntax
	// delete address;
	// delete p;
	p = new int;
	cout<<p<<" -> "<<*p<<endl;
	return 0;
}