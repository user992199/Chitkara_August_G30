#include<iostream>
using namespace std;
void update(int &x){
	x += 100;
}
int main(){
	// int * p = new int;
	int i = 10;
	// syntax
	// datatype & new_identifier = old_identifier;
	int &j = i;
	int &k = j;
	k = 17;
	j += 4;
	update(i);
	cout<<i<<endl;
	return 0;
}