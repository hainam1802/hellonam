#include <stdio.h>

int main(){
	int n,x;
	printf("nhap 1 so \n");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){	
		printf("so gia tri thu %d\n",i);
		scanf("%d",&ary[i]);
	
	}
	
	for(int i=n-1;i<n;i--){
		if(ary[i]%2!=0){
			x=ary[i];
			
			break;
		}else{printf("ko có gia tri");
		}
	}printf("so le cuoi la %d",x);
	
}
