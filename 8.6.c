#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int length(char *p) {
	int i = 0;
	while(p[i] != '\0') {
		i++;
	}
	return i;
}

int main() {
	char a[100];
	int k;
	char *p;
	printf("请输入字符串\n");
	scanf("%[^\n]", a);
	
	for (int i = 0; i < 100; ++i)
	{
		printf("[%c]", a[i]);
	}
	p = a;
	k = length(p);
	printf("这个字符串有%d位\n", k);
	return 0;
}