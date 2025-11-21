#include<stdio.h>
main(){
	int i,j,k;
	for(j=1;i<=5;i++){
		for(j=1; j<=5;j++){
			printf("x");
		}
		printf("\n");
	}
	printf("\n====================\n");
	for(i=1;i<5;i++){
		printf("x");
	}            
	printf("\n");
}
	printf("\n===========================\n");
	for(i=1;i<5;i++){
		for(k=4;k>=i;k--){
			printf("  ");
		}
		for (j=1;j<=i;j++){
			printf("x");
		}
		printf("n");
	}
