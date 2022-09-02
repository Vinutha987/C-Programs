#include<stdio.h>
int main(){
	int i,array[5]={0,1,2,3,4};
	int *ptr[5]={array,array+1,array+2,array+3,array+4};
	for(i=0;i<5;i++)
	{
		printf("array[%d]=%d ptr[%d]=%u *ptr[%d]=%d *(*ptr+%d)=%d\n",i,array[i],i,ptr[i],i,*ptr[i],i,*(*ptr+i));
	}
}

