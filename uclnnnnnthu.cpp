#include <stdio.h>
int main(){
	int a,b;
	printf("nhap so thu nhat \n");
	scanf("%d",&a);
	printf("nhap so thu 2 \n");
	scanf("%d",&b);
	for(;a*b!=0;){
		if(a>b){
		a%=b;}
		else{
		b%=a;
		}} printf("ucln la %d",a+b);

}
