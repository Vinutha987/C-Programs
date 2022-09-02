#include<stdio.h>
int main(){
	unsigned int res,val,newval,pos,nb,n;
	printf("enter the number\n");
	scanf("%x",&n);
	printf("enter the number of bits\n");
	scanf("%x",&nb);
	printf("enter the position\n");
	scanf("%x",&pos);
	printf("enter the new value\n");
	scanf("%d",&newval);
	val=(1<<nb)-1;
	res=n&(~(val<<pos));
	res=n|(newval<<pos);

	printf("result is:0X%x",res);
	return 0;
}
	
