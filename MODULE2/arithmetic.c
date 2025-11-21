#include<stdio.h>
main(){
	//Arithmetic
	int a,b,c;
	float ans;
	printf("\n enter value of a & b");
	scanf("%d %d" ,&a,&b);
	c=a+b;
	printf("\n add=%d",c);
	c=a-b;
	printf("\n sub=%d",c);
	c=a*b;
	printf("\n multi=%d",c);
	ans=a/b;
	printf("\n div=%f",ans);
	c=a%b;
	printf("\n module=%d",c); //a=10 b=2
	
	}
