#include<stdio.h>
int main(){
	unsigned int res,n,pos;
	printf("enter the number\n");
	scanf("%x",&n);
	printf("enter the position\n");
	scanf("%x",&pos);
	res=n&(~(1<<pos));
	printf("result is:%0X%x",res);
	return 0;
}
	
