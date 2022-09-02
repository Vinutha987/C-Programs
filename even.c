#include<stdio.h>
int main(){
	int n;
	printf("enter an integer\n");
	scanf("%d",&n);
	if(n&1 ==1)
		printf("odd\n");
	else
		printf("even\n");
	return 0;
}
