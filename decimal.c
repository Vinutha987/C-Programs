#include<stdio.h>
void dectobinary(int n)
{
	int i=0;
	int binarynum[30];
	while(n>0){
		binarynum[i]=n%2;
		n=n/2;
		i++;
	}
	for(int j=i-1;j>=0;j++)
		printf("%d",binarynum[j]);
}
int main(){
	int n;
	printf("enter a decimal number\n");
	scanf("%d",&n);
	dectobinary(n);
	return 0;
}
