#include<iostream>
using namespace std;
int main(){
	int *p; // wild pointer
	p = 0; // NULL pointer
	p = new int; // pointer
	*p = 14;
	cout<<p<<" -> "<<*p<<endl;
	delete p; // dangling pointer
	p = 0;
	cout<<p<<" -> "<<*p<<endl; // null pointer
	return 0;
}