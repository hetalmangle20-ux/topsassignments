#include<stdio.h>
/*
x1=0
x2=1;
ans=x1+x2=1
x1=x2=1
x2=ans=1
ans=x1+x2=1+1=2
x1=x2=1
x2=ans=2
ans=x1+x2=3
*/
main(){
	int x1=0,x2=1,ans,i;
	for(i=1;i<=10;i++){
		ans=x1+x2;
		printf("\t %d",ans);
		x1=x2;
		x2=ans;
	}
}
