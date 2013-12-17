#include <stdio.h>

int main() {
	int x,y,z;
	int a,b,c;
	int k;
	x = 1;
	y = 2;
	z = 3;
	k = a + b + c;

	for(c = 1; c <= 3; c++) {
		if(c != x && c != z) {
			printf("C的值是%d\n", c);
			if(c == 1) {
				printf("C的对手是X\n");
			} else if(c == 2) {
				printf("C的对手是Y\n");
			} else if(c == 3) {
				printf("C的对手是Z\n");
			}
		}	
	}

	for(a = 1; a <=3; a++) {
		if(a != y && a != x) {
			printf("a的值是%d\n", a);
			if(a == 1) {
				printf("a的对手是X\n");
			} else if(a == 2) {
				printf("a的对手是Y\n");
			} else if(a == 3) {
				printf("a的对手是Z\n");
			}
		}
	}
	for(b = 1; b <= 3; b++) {
		if(b != y && b != z) {
			printf("b的值是%d\n", b);
			if(b == 1) {
				printf("b的对手是X\n");
			} else if(b == 2) {
				printf("b的对手是Y\n");
			} else if(b == 3) {
				printf("b的对手是Z\n");
			}
		}
	}


	return 0;
}