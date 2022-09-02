#include<stdio.h>
int main(){
	int arr[4]={1,4,2,5,3},i;
	int size=sizeof(arr)/sizeof(arr[0]);
	largeArr(arr[4],size);
	printArr(arr[4],size);
	return 0;
}
void printArr(int arr[4],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d",arr[0]);
	}
}
void largeArr(int arr[4],int size)
{
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
		
