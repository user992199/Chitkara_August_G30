#include<iostream>
using namespace std;
int main(){
	// NULL pointer
	int *p = 0;
	p = NULL;
	p = nullptr;

	int i = 10;
	p = &i;

	cout<<*p<<endl;
	return 0;
}