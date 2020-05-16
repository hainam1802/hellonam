#include<stdio.h>

int main(){
 	int a,b,sum=0;
 	do{
 		printf("nhap 1 so a \n");
 		scanf("%d",&a);
 		printf("nhap 1 so b \n");
 		scanf("%d",&b);
 		
	 }while (a>b);
	 for(int i=a ;i<=b ;i++){
	 
	 		sum+=i;}
		 printf("tong la %d",sum);
	 
	}
