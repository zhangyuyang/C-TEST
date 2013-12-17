#include <stdio.h>

int main() {
	int k = 0;
	for(int i = 1; i <= 100; i++) {
		for(int j = 2; j < i; j++) {
			if (i % j == 0) {
				k = 0;
				break;
			} else {
				k = 1;
			}
		}
		if(k == 1) {
			printf("%d\n", i);
		}
	}
	return 0;
}