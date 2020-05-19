#include<stdio.h>
int main(){
	
int n;
printf("nhap 1 so \n");
scanf("%d",&n);
int ary[n];	
for(int i=0;i<n;i++){
		printf("nhap gia tri thu %d \n",i);
		scanf("%d",&ary[i]);}
	int x;
	int count;
	printf("nhap so thu 2 ");
	scanf("%d",&x);
	for(int i=0;i<n;i++){
		if(ary[i]==x){
			count=1;
		}
		else{	
		count=2;
		}}
		if(count==1){printf("x thuoc mang");
		}
		if(count==2){printf("x ko thuoc mang");
		}
		
	}
