#include <stdio.h>

int main() {
	double a[20];
	double b[20];
	double c[20];
	double totalNum = 0;
	a[0] = 2;
	b[0] = 1;
	for(int i = 1; i < 20; i++) {
		a[i] = a[i - 1] + b[i - 1];
		b[i] = a[i - 1];
	}
	for(int i = 0; i < 20; i++) {
		c[i] = a[i] / b[i];
		printf("%0.10lf\n", c[i]);
		totalNum = totalNum + c[i];
	}
	printf("总数是%0.10lf\n", totalNum);
	return 0;
}