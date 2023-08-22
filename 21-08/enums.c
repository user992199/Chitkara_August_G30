#include<stdio.h>
enum days {
	Mon, Tues = 11, Wed = 2, Thurs, Fri, Sat, Sun
};
enum days2 {
	Monday, Tuesday = 11, Wedday = 2, Thursday, Friday, Satday, Sunday
};
int main(){
	enum days today = Wed;
	printf("%d\n", today);
	printf("%d\n", sizeof(today));
	// printf("%d\n", sizeof(days));
	return 0;
}