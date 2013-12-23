#include <stdio.h>

char a[4];

int main() {	
	printf("请输入四位数字\n");
	
	scanf("%4[^\n]", a);
	
	for (int i = 0; i < 4; i++)
	{	
		printf("%c ", a[i]);
		
	}
	return 0;
}