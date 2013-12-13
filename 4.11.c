#include <stdio.h>

int main() {
	int a, b, c, d, temp;
	printf("请输入四个数\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	printf("您输入的四个数是%d,%d,%d,%d\n", a,b,c,d);
	if (a >= b) {
		temp = a;
		a = b;
		b = temp;
	}
	if (a >= c) {
		temp = a;
		a = c;
		c = temp;
	}
	if (a >= d) {
		temp = a;
		a = d;
		d = temp;
	}
	if (b >= c) {
		temp = b;
		b = c;
		c = temp;
	}
	if (b >= d) {
		temp = b;
		b = d;
		d = temp;
	}
	if (c >= d) {
		temp = d;
		c = d;
		d = temp;
	}
	printf("从小到大的顺序是%d,%d,%d,%d\n", a, b, c, d);
	return 0;
}