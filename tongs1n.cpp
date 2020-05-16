#include <stdio.h>

int main(){
	int n,a;
	do{
	printf("nhap 1 so \n");
	scanf("%d",&n);
	}while(n<0);
	float s=0;
	for(a=1;a<=n;a++){
		s+=1/float(a);}
		printf("s=%f",s);}
