#include<iostream>
using namespace std;
void print_hw(){
	cout<<"Hello World\n";
	return;
	cout<<"Hello Again\n";
}
int add(int a, int b){
	return a + b;
}
int main(){
	print_hw();
	cout<<add(1, 4)<<endl;
	return 0;
}