#include <stdio.h>
int main(){

int n;
printf("nhap 1 so :\n");
scanf("%d",&n);
int arr[n];

int count=1,max=0;
for(int i=0;i<n;i++){
		printf("Nhap pt thu %d\n",i);
		scanf("%d",&arr[i]);
	}
for(int i=0;i<n;i++){

if(arr[i]>0){
	if(arr[i]==arr[i+1]-1){
		count++;
		}}
	else count=1;	
		}
		
		if(count>max)	max=count;
		
printf("so thu tu %d\n",max);}
