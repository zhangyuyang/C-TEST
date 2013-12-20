#include <stdio.h>

int main() {
	int i = 0;
	int j = 0;
	char a[40];
	char b[40];
	char c[100];
	printf("请给A字符串赋值\n");
	scanf("%s", &a);
	printf("请给B字符串赋值\n");
	scanf("%s", &b);
	printf("1111%s\n", a);
	printf("2222%s\n", b);
	while (a[i] != '\0') {
		i++;
	}
	while (b[j] != '\0') {
		j++;
	}
	for (int k = 0; k < i; k++)
	{
		c[k] = a[k];
	}
	for (int s = 0; s < j; s++) {
		c[i + s] = b[s];
	}
	printf("拼接后的字符串%s\n", c);
	return 0;
}