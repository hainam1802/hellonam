#include <stdio.h>
int main(){
	int a,b,c;
	printf("Nhap 3 so \n");
	printf("so thu nhat :\n");
	scanf("%d",&a);
	printf("so thu 2 :\n");
	scanf("%d",&b);
	printf("so thu 3 :\n");
	scanf("%d",&c);

	if(a>b){
		if(a>c){printf("max %d",a);}
		else {printf("max %d",c);}
		}
	else {if(b>c) {printf("max %d",b);}
		  else {printf("max %d",c);}
	}
	}

