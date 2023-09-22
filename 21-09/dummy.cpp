#include<iostream>
using namespace std;
int fibo(int n){
	if(n == 1 or n == 2) return 1;
	return fibo(n-1) + fibo(n-2) + 1;
}
int main(){
	for(int i = 1; i <= 10; i++)
		cout<<i<<": "<<fibo(i)<<endl;
	return 0;
}