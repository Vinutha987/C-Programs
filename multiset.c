#include<stdio.h>
int main(){
	unsigned int res,val,nb,n,pos;
	printf("enter the number\n");
	scanf("%x",&n);
	printf("enter the number of bits\n");
	scanf("%x",&nb);
	printf("enter the position\n");
	scanf("%x",&pos);
	val=(1<<nb)-1;
	res=n|(val<<pos);
	printf("result is:0X%x",res);
	return 0;
}
	
