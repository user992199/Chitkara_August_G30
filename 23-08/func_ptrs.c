


#include<stdio.h>
int add(int a, int b){return a + b;}
int main(){
	// return_type (*ptr_name)(parameters);
	int (*ptr)(int, int) = &add;
	ptr = &add;
	printf("%d\n", ptr(5, 6));
	return 0;
}