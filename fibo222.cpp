#include <stdio.h>

int main(){
	int n,fibo=1,num1=0,num2=1;
	printf("nhap n \n");
	scanf("%d",&n);
	if(n==0){
		printf("so fibo thu 1 la \n");}
	else if(n>0){
	
		for(int i=1;fibo<n;i++){
			num1=num2;
			num2=fibo;
			fibo=num1+num2;
		}printf("so can tim %d",num2);
	}	
	}
