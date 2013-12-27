#include <stdio.h>

int main () {
	int a,b,c;
	int *p1, *p2, *p3;
	int *temp;
	printf("请输入A,B,C\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	p1 = &a;
	p2 = &b;
	p3 = &c;
	if ((a <= b) && (a <= c)) { //这里保证A最小，即是P1指向最小的一个，另外两个指针指向剩余两个变量（随机，没有逻辑关系）
		p1 = &a;
		p2 = &b;
		p3 = &c;
	} else if ((b <= a) && (b <= c)) { //同上，始终保证P1指向最小的一个，另外两个随机
		p1 = &b;
		p2 = &a;
		p3 = &c;
	} else {  //同上
		p1 = &c;
		p2 = &a;
		p3 = &b;
	}
	printf("这里是P1%d\n", *p1);
	if (*p2 >= *p3) {
		temp = p2;
		p2 = p3;
		p3 = temp;
	}

	printf("%d,%d,%d\n", *p1, *p2, *p3);
	printf("原数字%d,%d,%d\n", a, b, c);
	return 0;
}