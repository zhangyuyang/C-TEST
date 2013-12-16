#include <stdio.h>

int main() {
	double x = 1;
	double y = 1;
	double lastHigh = 0;
	double totalLong = 0;
	for(int i = 1; i < 10; i++) {
		x = 2 * x;
	}
	printf("%lf\n", x);
	lastHigh = 100 / x;
	printf("第十次反弹%0.10lf\n米", lastHigh);
	for(int i = 1; i < 10; i++) {
		totalLong = totalLong + y;
		y = 2 * y;
	}
	totalLong = totalLong + 100;
	printf("总共经过%0.10lf米\n", totalLong);
	return 0;

}