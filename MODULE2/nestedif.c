#include<stdio.h>
/* (cond1){
		if(cond2){
			//block
			}
}
*/
//WAP to find max among three num
main(){
	int a,b,c;
	printf("\n enter the value of a,b,c");
	scanf("%d %d", &a,&b,&c);
	if (a>b){
		if (a>c){
			printf("\n a is max");
		}
		else{
			printf("c is max");
		}
	}
	else if (b>a){
		if (b>c){
			printf("\n b is max");
			}
			else{
				printf("\n c is max");
		}
}
}
