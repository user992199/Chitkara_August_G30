#include<stdio.h>
void com(char arr[]){
	for(int i = 0; arr[i]; i++){
		char ch = arr[i];
		int freq = 1;
		while(ch == arr[i+1]){
			freq++;
			i++;
		}
		printf("%c", ch);
		if(freq > 1)printf("%d", freq);
	}
}
int main(){
	char arr[] = "aaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbcbbbbbbbddd";
	com(arr);
	return 0;
}