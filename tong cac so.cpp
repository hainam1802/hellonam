#include <stdio.h>

int main (){
	int  a;
	do{
	
	printf("nhap 1 so \n");
	scanf("%d",&a);
	}while(a<0);
	int n1=a,n2=0;
	for(;n1>0;n1/=10){
		n2=n2+n1%10;
	}printf("tong la %d",n2);}
