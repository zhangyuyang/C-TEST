#include <stdio.h>

int main() {
	float x;
	float y = 0;
	printf("请输入X，将计算得到Y\n");
	scanf("%f", &x);
	if(x < 1) {
		y = x;
	} else if(x >= 1 && x < 10) {
		y = 2 * x - 1;
	} else if(x >= 10) {
		y = 3 * x - 11;
	}
	printf("此时，Y的值是%f\n", y);
	return	0;
}