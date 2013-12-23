#include <stdio.h>

int main () {
	int a;
	int flag = 0;
	printf("请输入A的值\n");
	scanf("%d", &a);
	for (int i = 2; i < a; ++i)
	{
		if (a % i == 0) {
			flag = 1;
			break;
		}
	}
	if (flag == 1) {
		printf("这个数不是质数\n");
	}
	if (flag == 0) {
		printf("这个数是质数\n");
	}
	return 0;
}