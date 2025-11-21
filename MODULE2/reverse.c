#include<stdio.h>
/*
num1234 rev4321
rev=0 formula=rev=rev*10+rem
4 num%10=4 1234/10 123 rev=0*10+4=4
3 123%10=3 123/10 12 rev=4*10+3=43
2 12%10=2 	12/16 1 rev=43*140+2=432
1 1%10=1 	1/10  0 rev=432*10+1=4321
*/
main(){
	int num,rem,rev=0;
	printf("\n enter num");
	scanf("%d",&num); //init
	printf("\n original num=%d", num);
	
	while(num!=0){//cond
	rem=num %10;
	rev=rev*10+rev;
	//printf ("\n rem=%d \t rev=%d,rem,rev,num=num/10; //mod")
	}	
	printf("n \n revnum=%d",rev);
}

