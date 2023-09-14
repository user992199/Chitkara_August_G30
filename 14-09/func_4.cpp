#include<iostream>
using namespace std;
// function prototyping
// void print_num(int);
void print_num(int i = 10);
void print_hello();
int main(){
	print_num(1);
	print_num();
	print_hello();
	return 0;
}
void print_num(int i){
	cout<<i<<endl;
}
void print_hello(){
	cout<<"Hello\n";
}