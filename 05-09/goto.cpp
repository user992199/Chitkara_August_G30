#include<iostream>
using namespace std;
int main(){
	goto label;
	cout<<"before label\n";
	label:
	cout<<"after label\n";
	return 0;
}