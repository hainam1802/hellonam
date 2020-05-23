#include <stdio.h>
#include <stdlib.h>

int main(){

int n,*p;
printf("nhap 1 so :\n");
scanf("%d",&n);


int count=1,max=0;
p = (int *)malloc(n*sizeof(int));

for(int i=0;i<n;i++){
		printf("Nhap pt thu %d\n",i);
		scanf("%d",(p+i));
	}
for(int i=0;i<n;i++){
if(*(p+i)>0){

	if(*(p+i)==(*(p+i+1))-1){
		count++;
		}}
else count=1;}		
		printf("so thu tu %d\n",count);}
