#include<iostream>
using namespace std;
int main(){
	int i = 10;
	int * p1, *p2;
	p1 = &i;
	cout<<i<<" "<<&i<<endl;
	cout<<*p1<<" "<<p1<<endl;
	*p1 = 14;
	cout<<i<<endl;
	int * p3 = &i, *p4 = p1;
	cout<<*p3<<endl;
	cout<<*p4<<endl;
	return 0;
}