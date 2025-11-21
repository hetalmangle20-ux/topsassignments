#include<stdio.h>
/*
do{
	//block
}
while(condition)
#parts of loop 1.init 2.condition 3.modification
*/
main(){
	int i=15; //init
	do{
		printf("\n i=%d",i);
		i++; //modification
	}
	while(i<=10); //condition
}
