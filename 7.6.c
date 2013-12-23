#include <stdio.h>
#include <string.h>

void chuanlian(char a[], char b[]) {
	int num1 = 0;
	int num2 = 0;
	char c[100];
	for (int i = 0; i < strlen(a) - 1; ++i)
	{
		c[i] = a[i];
	}
	for (int i = 0; i < strlen(b) - 1; ++i)
	{
		c[strlen(a) - 1 + i] = b[i];
	}
	printf("=====================\n");
	for (int i = 0; i < strlen(c); ++i)
	{
		printf("%c", c[i]);
	}
	
}

int main () {
	char a[100];
	char b[100];
	char *p;
	printf("请给A字符串赋值\n");
	for (int i = 0; a[i - 1] != '\n'; ++i)
	{
		a[i] = getchar();
	}
	printf("请给B字符串赋值\n");
	for (int i = 0; b[i - 1] != '\n'; ++i)
	{
		b[i] = getchar();
	}
 	chuanlian(a, b);

	return 0;
}