



#include<stdio.h>
struct date{
	int d : 7;
	int : 0;
	int m : 7;
	int y : 18;
};
int main(){
	struct date today;
	today.d = 129;
	printf("%d\n", today.d);
	printf("%d\n", sizeof(today));
	return 0;
}