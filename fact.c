void fact(int num){
	int x=1;
	while(num!=0){
		x=num*x;
		num--;
	}
	printf("fact  is %d",x);
}
