#include <stdio.h>

int main() {
	int a;
	int b;
	int c;
	int aa;
	int bb;
	for(int i = 100; i <= 999; i++) {
		a = i % 10; //gewei
		aa = i / 10; 
		b = aa % 10; //shiwei
		bb = i / 100;
		c = bb % 10; //baiwei
		if (i == a * a * a + b * b * b + c * c * c) {
			printf("%d\n", i);
		} else {
			continue;
		}
	}
	return 0;
}