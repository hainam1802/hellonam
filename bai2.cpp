#include <stdio.h>
int main(){
	int a,b,c;
	printf ("Nhap 3 so \n");
	printf("so thu nhat :\n");
	scanf("%d",&a);
	printf("so thu hai :\n");
	scanf("%d",&b);
	printf("so thu ba :\n");
	scanf("%d",&c);
	if (a<b){
		if(a<c){printf("min %d",a);}
		else {printf("min %d",c);}
	}
	else {
		if (b<c){ printf ("min %d",b);}
		else {printf("min %d",c);
		}
	}
	
}
