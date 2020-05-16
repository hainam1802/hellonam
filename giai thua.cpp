
#include <stdio.h>
int main(){

	int a,b;
	do{
	printf("nhap 1 so \n");
	scanf("%d",&b);
	}while(b<0);
	int t=1;
	for(a = 1; a <= b; a++)
	{
		t*=a;}
		printf("%d ! la %d",b,t);
	}

