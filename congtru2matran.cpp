#include <stdio.h>

int main (){
	int ary[4][3];
	printf("ma tran thu nhat\n");
	for (int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("ary[%d][%d] =",i,j);
			scanf("%d",&ary[i][j]);
		}}
		for (int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("%5d",ary[i][j]);
		}
		printf("\n");
	}
	int arr[4][3];
	printf("ma tran thu 2\n");
	for (int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("arr[%d][%d] =",i,j);
			scanf("%d",&arr[i][j]);
		}}
	for (int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("%5d",arr[i][j]);
		}
		printf("\n");
	}
	int c[4][3],h[4][3];
	for (int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			c[i][j]=arr[i][j]+ary[i][j];
		}
}

	printf("tong la \n");
	for (int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("%5d",c[i][j]);
	
		}
		printf(" \n");}
		
	for (int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			h[i][j]=arr[i][j]-ary[i][j];
		}
}

	printf("hieu la \n");
	for (int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("%5d",h[i][j]);
	
		}
		printf(" \n");}
		}
			
