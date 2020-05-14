//Yêu cau nguoi dùng nhap vào dúng 3 canh 1 tam giác ( Sai bat nhap lai)
#include <stdio.h>

int main(){
	int a,b,c;
	printf("nhap so 1 \n");
	scanf("%d",&a);
	printf("nhap so 2 \n");
	scanf("%d",&b);
	printf("nhap so 3 \n");
	scanf("%d",&c);
	if(a>0 && b>0 && c>0){
		
		for(;a>=b+c || b>=a+c || c>=a+b;){
			printf("ko thoa man nhap lai \n");
				printf("nhap so 1 \n");
				scanf("%d",&a);
			
				printf("nhap so 2 \n");
				scanf("%d",&b);
				
				printf("nhap so 3 \n");
				scanf("%d",&c);
			}printf("3 canh tam giac");}
	else{printf("khong thoa man");
	}			
		}
