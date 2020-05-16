#include <stdio.h>
int main(){
	int a,dem;
	do{
	printf("nhap 1 so \n");
	scanf("%d",&a);
	}while(a<0);
	for(int i=a;i>0;i/=10){
		dem++;
		}
		printf("%d co %d so",a,dem);}
