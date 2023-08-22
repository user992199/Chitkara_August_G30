#include<stdio.h>
#define print(x) printf("%f\n", x)
#define print_s(x) printf("%s\n", #x)
int main(){
	float a = 13;
	print(a);
	print_s(a);
	print_s(kadjfsda);
	// printf("%f", a);
	return 0;
}