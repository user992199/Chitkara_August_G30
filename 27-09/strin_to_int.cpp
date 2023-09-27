#include<iostream>
#include<cstring>
using namespace std;
int stoint(string s){
	// in case the number is negative
	if(s[0] == '-')
		return -stoint(s.substr(1));
	// base case
	if(s.size() == 0) return 0;
	// recursive case
	int last_digit = s.back() - '0';
	s.pop_back();
	return stoint(s) * 10 + last_digit;
}
int main(){
	cout<<stoint("-1205") + 5<<endl;
	cout<<stoint("1205") + 5<<endl;
	return 0;
}