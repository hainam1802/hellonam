#include <stdio.h>

int main(){
	int n;
	printf("nhap 1 so \n");
	scanf("%d",&n);
	int ary[n];
	for (int i=0;i<n;i++){
		printf("nhap 1 so %d \n",i);
		scanf("%d",&ary[i]);
	
	
	for (int j=0;j<i;j++){

		if(ary[j] == ary[i]){
		
		printf("Nhap lai so thu %d \n",i);
		scanf("%d",&ary[i]);}
	}
}}
