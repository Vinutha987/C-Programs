#include<stdio.h>
int main(){
	unsigned int r,n,pos;
	printf("enter the number\n");
	scanf("%d",&n);
	printf("enter the position\n");
	scanf("%d",&pos);
	r=n||1<<pos;
	printf("number is %d \n",r);
	return 0;
}
