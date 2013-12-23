#include <stdio.h>

int greatestCommonDivisor (int x, int y) {
	int num;
	int resultNum = 0;
	if (x > y) {
		num	= y;
	} else {
		num = x;
	}
	for (int i = num; i >= 1; i--)
	{
		if ((x % i == 0) && (y % i == 0)) {
			resultNum = i;
			break;
		}
	}
	return resultNum;
} 

int leastCommonMultiple (int x, int y) {
	int resultNum;
	int total;
	total = x * y;
	for (int i = total; i >= 1 ; i--)
	{
		if ((i % x == 0) && (i % y == 0)) {
			resultNum = i;
		} 
	}
	return resultNum;
}

int main () {
	int x, y;
	int flag = 0;
	int flag1 = 1;
	printf("请输入数字x\n");
	scanf ("%d", &x);
	printf("请输入数字y\n");
	scanf ("%d", &y);
	flag = greatestCommonDivisor(x, y);
	if (flag == 0) {
		printf("最大公约数错误或没有最大公约数\n");
	} else {
		printf("最大公约数是%d\n", flag);
	}
	flag1 = leastCommonMultiple(x, y);
	if (flag1 == 1) {
		printf("最小公倍数错误\n");
	} else {
		printf("最小公倍数是%d\n", flag1);
	}
	return 0;
}
