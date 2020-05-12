#include <stdio.h>

int main(){
	int num;
	printf("nhap 1 so : ");
	scanf("%d",&num);
	
		
		int n1=num,n2=0,l;
	for(l=0;n1!=0;l++){
		n2=n2*10+n1%10;
		n1/=10;
		}
		printf("nghich dao la %d",n2);}

