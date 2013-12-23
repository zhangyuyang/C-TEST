#include <stdio.h>
#define MAX 1000

int main () {
	char a[MAX];
	int cishu = 0;
	printf("请输入字符串\n");
	for (int i = 0; a[i - 1] != '\n'; ++i)
	{
		a[i] = getchar();
		cishu = i;
	}
	printf("反顺输出字符串\n");
	printf("======================\n");
	for (int i = cishu - 1; i >= 0; i--)
	{
		printf("%c", a[i]);
	}

	return 0;
}