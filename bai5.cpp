#include <stdio.h>
int main(){
	int a,b;
	float t;
	printf("Nhap vao 2 so nguyen :\n");
	printf("so thu nhat la :\n");
	scanf("%d",&a);
	printf("so thu 2 la :\n");
	scanf("%d",&b);

	if(a>=b){printf("%d/%d=%f",a,b,(float)a/b);
	}
	else{printf("%d*%d=%d ",a,b,a*b);
	}
}
