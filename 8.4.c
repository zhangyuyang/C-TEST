#include <stdio.h>
#include <stdlib.h>

int main () {
	int m = 0, n = 0, i = 0;
	int a[100];
	int *p1, *p2;
	printf("请问需要输入几个数字，N必须大于2\n");
	scanf("%d", &n);
	printf("请一次输入%d个数字\n", n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &a[i]);
	}
	printf("请问需要向后移动多少个位置\n");
	scanf("%d", &m);
	p1 = a; //这是是P1指针指向数组A的起始位置，并不是把数组A整个数组全部复制到P1这个指针里面，因此P1不需要分配内存空间
	p2 = a + m;
	for (int j = 0; j < n - m; j++)
	{
		printf("%d", p2[j]);
	}
	printf("\n");
	for (int j = 0; j < m; ++j)
	{
		printf("%d", p1[j]);
	}
	return 0;

}