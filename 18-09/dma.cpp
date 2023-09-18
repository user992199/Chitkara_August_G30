#include<iostream>
using namespace std;
int main(){
	// int *p = new int;
	// *p = 14;
	int * p;
	{
		p = new int;
		*p = 13;
	}
	p = new int;
	cout<<*p<<endl;
	return 0;
}