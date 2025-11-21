#include<stdio.h>
/*
if(cond1){
	//block
	}
	else if(cond2){
				//block
	}
	else{}
	*/
	//WAP to find max among three num using and operator
	main(){
		int a,b,c;
		printf("\n enter the value of a,b,c");
		scanf("%d %d %d",&a, &b,&c);
		if (a>b && a>c){
			printf("\n a is max");
		}
		else if (b>a && b>c){
			printf("n b is max");	
		}
		else{
			printf("n c is max");
		}	
	}
