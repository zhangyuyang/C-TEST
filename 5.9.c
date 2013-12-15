#include <stdio.h>

int main() {
	int temp;
	int total = 0;
	int k = 0;
	printf("打印出1000以内的完数\n");
	for(int i = 1; i <= 10000; i++) {
 			total = 0;
			for(int j = 1; j < i; j++) {

				if(i % j == 0) {
					
					temp = j;
					total = total + temp;
				}else {
					continue;
				}
			}

		if(total == i) {
			printf("%d是完数\n", i);
		} else {
			continue;
		}
	}
	return 0;
}