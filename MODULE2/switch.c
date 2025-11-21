#include<stdio.h>
/*
switch(choice){
		case1:
		//block
		break;
		case2:
			//block
			break;
			default:
			wrong choice:
			break;
}
*/
//WAP to create simple calculator
main(){
	int a,b;
	char choice;
	printf("\n press '+' for add");
	printf("\n press '-' for sub");
	printf("\n press '*' for mul");
	printf("\n press '/' for div");
	printf("\n\n enter your choice");
	scanf("%c",& choice);
	printf("\n enter a and b");
	scanf("%d %d",&a,&b);
	switch(choice){
		case'+':
			printf("\n addition of %d and %d=%d",a,b,a+b);
			break;
			case'-':
			printf("\n sub of %d and %d=%d",a,b,a-b);
			break;
			case'*':
			printf("\n mul of %d and %d=%d",a,b,a*b);
			break;
			case'/':
			printf("\n div of %d and %d=%d",a,b,a/b);
			break;
			default:
				printf("\n wrong choice");
				break;
	}
}
