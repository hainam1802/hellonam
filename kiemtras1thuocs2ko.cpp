//2. Nh?p vào 2 chuoi s1, s2. Kiem tra xem chuoi s1 có chua chuoi s2 hay không?

#include <stdio.h>
#include <string.h>

int main(){
	char s1[20],s2[20];
	printf("nhap chuoi 1:\n");
	scanf("%s",s1);
	printf("nhap chuoi 2:\n");
	scanf("%s",s2);
	int i = 0, j = 0;
	int f = 0;
	
	while (s1[i] != 0)
	{
	if (s1[i] == s2[j]){
		j++;
		f = 1;
		break;
		
	}
	else
		j = 0;
		i++;
	}
	if (f == 1)
	printf("Chuoi thu hai nam trong chuoi thu nhat\n");
	else
	printf("Chuoi thu hai khong nam trong chuoi thu nhat\n");
}
	
