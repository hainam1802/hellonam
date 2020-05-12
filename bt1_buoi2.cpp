#include <stdio.h>

int main(){
	int a;
	printf("nhap 1 so :\n");
	scanf("%d",&a);
	if(a>0 && a<=9999){
		if(a>0 && a<=9){printf("so nghich dao la %d",a);}
		if(a>=10 && a<=99){
			int b,c,d;
			b=a/10;
			c=a%10;
			a=b*10+c;
			d=c*10+b;
			printf("so nghich dao la %d\n ",d);}
		if(a>=100 && a<=999){
			int b,c,d,e,f;
			b=a/100;
			c=a%100;
			d=c/10;
			e=c%10;
			a=b*100+d*10+e;
			f=e*100+d*10+b;
			printf("so nghich dao la %d\n",f);}
		if(a>=1000 && a<=9999){	
			int b,c,d,e,f,g,u;
			b=a/1000;
			c=a%1000;
			d=c/100;
			e=c%100;
			f=e/10;
			g=e%10;
			a=b*1000+d*100+f*10+g;
			u=g*1000+f*100+d*10+b;
			printf("so can tim la %d \n",u);}}
	else {printf("khong thoa man \n");}	
	}		
		
	
