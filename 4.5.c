#include <stdio.h>

double getNumber() {
	double n;
	do{
		printf("请输入一个小于1000的数字\n");
		scanf("%lf", &n);
		} while(n > 1000 || n < -1000);
		return n;
}

int main() {
	int a = (int)getNumber();
	long b = a * a;
	printf("平方是%ld\n", b);
	return 0;
}