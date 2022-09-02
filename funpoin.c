#include<stdio.h>
void display(void);
void (*funp) (void);
void display(){
	printf("hello\n");
}
int main(){
	int a=3,*p;
	p=&a;
	printf("%d %d",a,*p);
	funp=&display;
	(*funp)();
	display();
}
