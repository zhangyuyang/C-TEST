#include <stdio.h>

int paixu(int num1, int num2, int num3) {
	if(num1 > num2 && num1 > num3) {
		return num1;
	} else if(num2 > num1 && num2 > num3) {
		return	num2;
	} else {
		return num3;
	}
}

int main() {
	int a, b, c;
	int max;
	printf("请输入数字A\n");
	scanf("%d", &a);
	printf("请输入数字B\n");
	scanf("%d", &b);
	printf("请输入数字C\n");
	scanf("%d", &c);
	max = paixu(a,b,c);
	printf("最大的数字是%d", max);
	return 0;
}