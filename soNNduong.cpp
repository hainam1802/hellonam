#include <stdio.h>
int main(){

int n;
printf("nhap 1 so \n");
scanf("%d",&n);
int ary[n];	
for(int i=0;i<n;i++){
		printf("nhap gia tri thu %d \n",i);
		scanf("%d",&ary[i]);}
int min=ary[0];

		for(int i=0;i<n;i++){
		if( ary[i]<min ){
			min=ary[i];
			
		}}
		
int n_min = min;
	for(int i=0;i<n;i++){
		if( ary[i]>0){
			n_min = ary[i];
			break;
		}}
	for(int i=0;i<n;i++)
	{if(ary[i] >0 && ary[i]<n_min){
		n_min=ary[i];
	}
			
	}printf("so duong nho nhat la %d",n_min);}			
