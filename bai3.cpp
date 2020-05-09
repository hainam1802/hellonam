#include <stdio.h>
#include <math.h>       

int main(){
	float a,b,c,x,x1,x2,d;
	printf("Nhap 3 so \n");
	printf("So thu nhat :\n");
	scanf("%f",&a);	
	printf("So thu 2 :\n");
	scanf("%f",&b);
	printf("So thu 3 :\n");
	scanf("%f",&c);
	if(a==0){
		if(b==0){
			if(c==0){printf("Pt co vo so nghiem");}
			else{printf("pt vo nghiem");}
			}
		else{
			x=-c/b;
			printf("pt co nghiem x=%f",x);
		}
	}
	else {	
	d=b*b-4*a*c;

		if(d>=0){
			if (d==0){
				x1=x2=(-b)/(2*a);
				printf("pt co nghiem \nx1=%f\nx2=%f",x1,x2);
			}
			else{
				x1=((-b)+sqrt(d))/(2*a);
				x2=((-b)-sqrt(d))/(2*a);
		
				printf("pt co nghiem \nx1=%f\nx2=%f",x1,x2);
							}}
		else {printf("pt vo nghiem");
		}					
		}
	}
