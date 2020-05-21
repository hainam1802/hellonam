#include <stdio.h>

int main (){
	int ary[4][3];
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
	printf ("ma tran chuyen vi \n");
	for (int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			printf("%5d",ary[j][i]);
		}
		printf("\n");
	}}

