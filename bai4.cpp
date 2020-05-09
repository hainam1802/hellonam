#include <stdio.h>
#include <math.h>       

int main(){
	float a,b,c,u,p,s;
	printf("Nhap vao 3 so :\n");
	printf("so thu nhat :\n");
	scanf("%f",&a);
	printf("so thu hai :\n");
	scanf("%f",&b);
	printf("so thu ba :\n");
	scanf("%f",&c);
	if(a+b>c){
		if(a+c>b){
			if(b+c>a){printf("a,b.c tao thanh tam giac\n");
			u=a+b+c;
			printf("chu vi tam giac la %f\n",u);
			p=(a+b+c)/2 ;
			s=sqrt(p*(p-a)*(p-b)*(p-c));
			printf ("dien tich tam giac la %f\n",s);
			}
			else {printf("a,b,c khong tao thanh tam giac");}}
		else {printf ("a,b,c khong tao thanh tam giac");
		}
	}
	else{printf("a,b,c khong tao thanh tam giac");
	}
}
