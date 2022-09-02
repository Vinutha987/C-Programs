#include<stdio.h>
#include<string.h>
int main(){
	char arr[10][10];
	int i;
	printf("enter 10 strins\n");
	for(i=0;i<10;i++)
	{
		scanf("%s",arr[i]);
	}
	for(i=0;i<10;i++){
	printf("%s",arr[i]);
	}
}
