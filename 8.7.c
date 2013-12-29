#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char a[100];
	int m = 0;
	char *p1;
	char *p2; 
	printf("请输入字符串\n");
	scanf("%[^\n]", a);
	p1 = a;
	printf("从第几位开始复制？\n");
	scanf("%d", &m);

	memcpy(p2,p1 + m, strlen(a) - m);
	p2[strlen(a) - m + 1] = '\0'

	printf("%s", p2);
	return 0;
}