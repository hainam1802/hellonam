#include<stdio.h>
int main(){
	
int n;
printf("nhap 1 so \n");
scanf("%d",&n);
int ary[n];	
	for(int i=0;i<n;i++){
		printf("nhap gia tri thu %d \n",i);
		scanf("%d",&ary[i]);}
		float sum=0;
		int count=0;
	for(int i=0;i<n;i++){
		if(ary[i]%2!=0 && i%2==0){
				count++;
				sum+=ary[i];
			}
			}printf("tbc la %f",float(sum)/count);}
