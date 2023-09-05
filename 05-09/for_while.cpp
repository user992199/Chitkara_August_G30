#include<iostream>
using namespace std;
int main(){
	int i = 0;
	for(;;){
		cout<<i<<endl;
		if(++i > 10) break;
	}
	while(i < 100){
		cout<<i<<endl;
		if(++i > 20)break;
	}
	return 0;
}