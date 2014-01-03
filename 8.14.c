#include <stdio.h>

void reverse(int *p, int n) {
	int b[n];
	for (int i = 0; i < n; ++i)
	{
		b[i] = *(p + n -1 - i);
	}
	printf("逆向输出\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%d,\n", b[i]);
	}

}

int main () {
	int a[100];
	int n = 0;
	int *p = a;
	printf("输入N的长度\n");
	scanf("%d", &n);
	printf("请输入%d个数\n", n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &a[i]);
	}
	printf("正序输出\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%d,\n", *(p + i));
	}
	reverse(p, n);
	return 0;
}