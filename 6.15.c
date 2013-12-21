#include <stdio.h>

int digui(int n) {
	int c;
	if (n == 1) {
		c = 1;
	}
	else {
		c = digui(n - 1) * n;
	}
	return c;
}

int main() {
	int resultNum;
	int a;
	printf("输入A的数值\n");
	scanf("%d", &a);
	resultNum = digui(a);
	printf("结果是%d\n", resultNum);
	return 0;
}