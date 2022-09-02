#include<stdio.h>
int main(){
	unsigned int x=0x12345678;
	char *ch;
	ch=&x;
	if(*ch==0x78)
		printf("little  endien\n");
	else
		printf("big endien");
	printf("%d %d",sizeof(ch),sizeof(*ch));
	return 0;
}
