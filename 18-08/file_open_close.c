#include<stdio.h>
int main(){
	FILE * ptr = fopen("file.txt", "a");
	// task
	if(ptr == 0) printf("File not opened\n");
	else printf("File opened\n");
	fprintf(ptr, "\n%d", 15);
	fclose(ptr);
	fseek(ptr, 0, SEEK_SET); // SEEK_END // SEEK_CUR
	return 0;
}