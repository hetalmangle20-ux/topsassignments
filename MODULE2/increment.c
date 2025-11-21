#include<stdio.h>
main(){
	int a=10,x=11,y,m=20,n;
	a++;//a=a+;increment by 1;
	printf("\n a=%d",a);
	a--;
	printf("\n a=%d",a);
	//=========pre and post=========//
	y=x++;//post increment:=>
	//first value assign to y then x increase
	printf("\n y=%d x=%d",y,x);
	n=++m; //pre increment=>
	//first increase value then assign to n
	printf("\n n=%d m=%d,n,m");
}
