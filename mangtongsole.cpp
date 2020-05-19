#include <stdio.h>
	int main(){
		
	int n;
	printf("nhap 1 so \n");
	scanf("%d",&n);
	int ary[n];	
	for(int i=0;i<n;i++){
		printf("nhap gia tri thu %d \n",i);
		scanf("%d",&ary[i]);}
		float sum=0;
		float count=0;
		
	for(int i=0;i<10;i++){
		if(ary[i]%2!=0){
			count++;
			sum+=ary[i];
			
		}}printf("tong so le la %f",float(sum)/count);}
